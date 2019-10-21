#ifndef LIBFTMEM_H
# define LIBFTMEM_H

# include "../libft.h"

void	ft_memdel(void **ptr);
void	*ft_bzero(void *ptr, size_t n);
void	*ft_memnew(size_t n);
void	*ft_memset(void *dst, int c, size_t n);

#endif
