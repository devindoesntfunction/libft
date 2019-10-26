#include "../libft.h"

#define SUM ((i < a.len ? a.ptr[i] : 0) + (i < b.len ? b.ptr[i] : 0) + sum)

t_vlq	different_signs(t_vlq a, t_vlq b)
{
	if (a.sign == negative)
	{
		a.sign = positive;
		return (ft_vlqsubtract(b, a));
	}
	b.sign = positive;
	return (ft_vlqsubtract(a, b));
}

t_vlq	ft_vlqadd(t_vlq a, t_vlq b)
{
	t_vlq	ret;
	size_t	i;
	int	sum;

	if (a.sign != b.sign)
		return (different_signs(a, b));
	ret.len = (a.len > b.len ? a.len : b.len) + 1;
	ret.ptr = ft_memnew(ret.len);
	i = 0;
	sum = 0;
	while (i < ret.len)
	{
		sum = SUM;
		ret.ptr[i] = sum % 256;
		sum /= 256;
		i += 1;
	}
	while (!ret.ptr[i])
		i -= 1;
	ret.len = i;
	ret.sign = a.sign;
	return (ret);
}
