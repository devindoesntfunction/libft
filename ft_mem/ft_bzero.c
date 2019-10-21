#include "../libft.h"

void	*ft_bzero(void *dst, size_t n)
{
	return (ft_memset(dst, 0, n));
}
