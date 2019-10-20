#include "../libft.h"

char	*ft_ftoa(double f)
{
	return (ft_ldtoa((long double)f));
}
