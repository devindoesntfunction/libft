#include "../libft.h"
#include <stdio.h>

#define I (i >= 0 ? (a[i] - '0') : 0)
#define J (j >= 0 ? (b[j] - '0') : 0)
#define K ((i > j ? i : j) + 1)

static void	ft_trunc(char **ret)
{
	char *temp;

	printf("truncating\n");
	temp = *ret;
	*ret = ft_strdup((*ret) + 1);
	free(temp);
}

static char	*ft_trim_preceding_zeroes(char *str)
{
	char *temp;

	temp = str;
	while (*str == '0')
		str++;
	if (str == temp)
		return (str);
	if (!(*str))
	{
		free(temp);
		return (ft_strdup("0"));
	}
	else
	{
		str = ft_strdup(str);
		free(temp);
		return (str);
	}
	return (str);
}

char		*ft_stradd(char *a, char *b)
{
	int	i;
	int	j;
	int	sum;
	char	*ret;

	i = ft_strlen(a);
	j = ft_strlen(b);
	sum = 0;
	ret = ft_strnew((i > j ? i : j) + 2);
	while (i > 0 || j > 0)
	{
		i -= i >= 0 ? 1 : 0;
		j -= j >= 0 ? 1 : 0;
		sum = I + J + sum;
		printf("%d + %d = %d\n sum = %d\n", I, J, sum, sum);
		ret[K] = (sum % 10) + '0';
		sum /= 10;
	}
	printf("value of sum when exiting while loop = %d\n", sum);
	if (sum)
		ret[0] = sum + '0';
	else
		ft_trunc(&ret);
	return (ft_trim_preceding_zeroes(ret));
}
