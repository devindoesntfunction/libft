#include "libftmem.h"

void	ft_memdel(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
