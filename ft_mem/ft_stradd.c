#include "../libft.h"

char	*ft_stradd(char *a, char *b)
{
	int	i;
	int	j;
	int	carry;
	char	*ret;

	i = ft_strlen(a);
	j = ft_strlen(b);
	carry = 0;
	ret = ft_strnew((i > j ? i : j) + 1);
	while (i > 0 || j > 0)
}
