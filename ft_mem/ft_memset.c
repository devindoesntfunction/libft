#include "../libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	while (n)
		((char*)dst)[n--] = (char)c;
	((char*)dst)[0] = (char)c;
	return (dst);
}
