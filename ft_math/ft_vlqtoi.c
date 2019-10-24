#include "../libft.h"

static int	min(t_vlq x)
{
	t_vlq temp;

	temp = ft_itovlq(INT_MIN);
	if (x.sign == negative && x.len == temp.len &&
		!ft_memcmp(x.ptr, temp.ptr, x.len))
		return (1);
	return (0);
}

int	ft_vlqtoi(t_vlq x)
{
	size_t i;
	int ret;

	if (min(x))
		return (INT_MIN);
	ret = 0;
	i = 0;
	while (i < x.len && i < sizeof(int))
	{
		((t_byte*)&ret)[i] = x.ptr[i];
		i++;
	}
	return (ret * x.sign);
}
