#include "../libft.h"

char *ft_strnew(size_t n)
{
	return (ft_memnew(n + 1));
}
