#include "../libft.h"

char	*ft_strjoin(char *a, char *b)
{
	char *ret;
	char *ptr;

	ret = ft_strnew(ft_strlen(a) + ft_strlen(b));
	ptr = ret;
	if (a)
	{
		while (*a)
			*(ptr++) = *(a++);
	}
	if (b)
	{
		while (*b)
			*(ptr++) = *(b++);
	}
	return (ret);
}
