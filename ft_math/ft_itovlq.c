#include "../libft.h"
#include <limits.h>

static t_vlq	nought(void)
{
	t_vlq	ret;

	ret.sign = positive;
	ret.len = 1;
	ret.ptr = ft_memnew(1);
	*((unsigned char*)(ret.ptr)) = 0;
	return (ret);
}

static t_vlq	min(void)
{
	t_vlq ret;

	ret.sign = negative;
	ret.ptr = ft_memnew(sizeof(int));
	ret.ptr[sizeof(int) - 1] = 126;
	ret.len = sizeof(int);
	return (ret);
}

t_vlq		ft_itovlq(int x)
{
	t_vlq	ret;
	size_t i;

	if (x == INT_MIN || x == 0)
		return (x ? min() : nought());
	ret.sign = (x >= 0 ? positive : negative);
	x = x * (x >= 0 ? 1 : -1);
	ret.ptr = ft_memnew(sizeof(int));
	ret.len = 0;
	i = 0;
	while (i < sizeof(int))
	{
		ret.ptr[i] = (t_byte)(x % 256);
		i += 1;
		x /= 256;
	}
	while (!ret.len)
	{
		if (((unsigned char*)ret.ptr)[i] != 0 || !i)
			ret.len = i + 1;
		i -= 1;
	}
	return (ret);
}
