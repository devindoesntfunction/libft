#include "../libft.h"

t_vlq	ft_vlqdup(t_vlq v)
{
	t_vlq ret;

	ret.sign = v.sign;
	ret.len = v.len;
	ret.ptr = ft_memdup(v.ptr, v.len);
	return (ret);
}
