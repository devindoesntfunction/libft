#include "../libft.h"
#define C

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	while (n > 0)
	{
		if (*((char*)s1) != *((char*)s2))
			return (*((char*)s1) - *((char*)s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
