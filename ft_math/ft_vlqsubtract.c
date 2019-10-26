#include "../libft.h"

#define P positive
#define N negative

static int	ft_vlqabscmp(t_vlq a, t_vlq b)
{
	size_t i;

	if (a.len != b.len)
		return ((a.len > b.len) ? 1 : -1);
	i = a.len;
	while (i > 0)
	{
		if (a.ptr[i] != b.ptr[i])
			return (a.ptr[i] - b.ptr[i]);
		i -= 1;
	}
	return (a.ptr[i] - b.ptr[i]);
}

static void	carry(int *x, t_byte *ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i] == 0)
		i += 1;
	ptr[i--] -= 1;
	while (i > 0)
		ptr[i--] = 255;
	*x = ptr[i] + 256;
}

static t_vlq	subtract(t_vlq a, t_vlq b)
{
	int	x;
	size_t	i;
	t_byte	*cpy;
	t_vlq	ret;

	ret.sign = a.sign;
	ret.ptr = ft_memnew(a.len);
	cpy = ft_memdup(a.ptr, a.len);
	while (i < a.len)
	{
		x = cpy[i];
		if (x < b.ptr[i])
			carry(&x, cpy + i + 1);
		ret.ptr[i] = x - b.ptr[i];
		i += 1;
	}
	free(cpy);
	while (ret.ptr[i] == 0)
		i--;
	ret.len = i + 1;
	return (ret);
}

t_lvq	ft_vlqsubtract(t_vlq a, t_vlq b)
{
	if (a.sign != b.sign)
	{
		b.sign *= -1;
		return(ft_vlqadd(a, b);
	}
	if (ft_vlqabscmp(a, b) == 0)
		return (ft_itovlq(0));
	if (ft_vlqabscmp(a, b) < 0)
	{
		ret = ft_vlqsubtract(b, a);
		ret.sign *= -1;
		return (ret);
	}
	return (subtract(a, b));
}

