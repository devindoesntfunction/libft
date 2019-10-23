#ifndef LIBFTMEM_H
# define LIBFTMEM_H

# include "../libft.h"

void	ft_memdel(void **ptr);
void	*ft_bzero(void *ptr, size_t n);
void	*ft_memnew(size_t n);
void	*ft_memset(void *dst, int c, size_t n);
void	*ft_memjoin(void *a, size_t a_len, void *b, size_t b_len);
void	*ft_memdup(void *ptr, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);

#endif
