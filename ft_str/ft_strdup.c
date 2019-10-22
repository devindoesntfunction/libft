#include "../libft.h"

char	*ft_strdup(char *str)
{
	char *ret;
	size_t i;

	i = 0;
	ret = ft_strnew(ft_strlen(str));
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
