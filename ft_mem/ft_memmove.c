#include "../libft.h"

static void	*fwd(void *dst, void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i += 1;
	}
	return (dst);
}

static void	*bwd(void *dst, void *src, size_t n)
{
	while (n-- > 0)
		((char*)dst)[n] = ((char*)src)[n];
	return (dst);
}

void	*ft_memmove(void *dst, void *src, size_t n)
{
	if (!src || !dst)
		return (NULL);
	if (src == dst || n == 0)
		return (dst);
	if (src > dst)
		return (fwd(dst, src, n));
	else
		return (bwd(dst, src, n));
}
