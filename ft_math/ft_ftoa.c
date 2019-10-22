#include "../libft.h"

char	*ft_ftoa(double f, int p)
{
	return (ft_ldtoa((long double)f, p));
}
