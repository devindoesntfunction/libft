#include "../libft.h"

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

t_vlq ft_divide(t_vlq dividend, t_vlq divisor)
{
	t_vlq ret;
	int i;

	if ((i = ft_vlqabscmp(dividend, divisor)) < 0)
		return (ft_itovlq(0));
	if (i == 0)
		return (ft_itovlq(1));
	ret.sign = dividend.sign * divisor.sign;
}
