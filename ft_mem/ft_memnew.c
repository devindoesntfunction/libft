#include "../libft.h"

void	*ft_memnew(size_t n)
{
	return (ft_bzero(malloc(n), n));
}
