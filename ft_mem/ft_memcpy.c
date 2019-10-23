#include "libftmem.h"

void	*ft_memdup(void	*ptr, size_t n)
{
	void	*ret;
	size_t	i;

	if (!(ret = malloc(n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char*)ret)[i] = ((char*)ptr)[i];
		i += 1;
	}
	return (ret);
}
