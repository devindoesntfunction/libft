#include "../libft.h"

void	ft_vlqfree(t_vlq *x)
{
	x->len = 0;
	x->sign = positive;
	free(x->ptr);
	x->ptr = NULL;
}
