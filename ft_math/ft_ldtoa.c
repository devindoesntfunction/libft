#include "../libft.h"

static char	*catch(long double f, int p)
{
	char *temp;
	char *ret;

	if (f < 0)
	{
		temp = ft_ldtoa(-1 * f, p);
		ret = ft_strjoin("-", temp);
		free(temp);
		return (ret);
	}
	if (f == f * 2)
		return (ft_strdup("inf"));
	return (ft_strdup("NaN"));
}

char		*ft_ldtoa(long double f, int p)
{
	char *nat;
	char *frac;
	size_t	i;
	long double m;

	if (f != f || f == f * 2 || f < 0)
		return (catch(f, p));
	i = floor_log_ten(f);
	nat = ft_strnew(i);
	m = ft_exponentiate(10, (i));
	i = 0;
	while (m >= 1)
	{
		nat[i++] = (char)(f / m) + '0';
		f -= m * (int)(f / m);
		m /= 10.0;
	}
}
