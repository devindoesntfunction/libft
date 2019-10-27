#include "../libft.h"

/*
**	shifting left (multiplying by positive powers of 2) is represented by a positive shift
**	shifting right (multiplying by negative powers of 2) is represented by a negative shift
*/

t_vlq	left(t_vlq *v, int shift)
{
	t_byte	*ptr;
	int	bitshift;
	int	byteshift;
	size_t	i;

	byteshift = shift / 8;
	bitshift = shift % 8;
	ptr = ft_memnew(v->len + byteshift + 1);
	ft_memmove(v->ptr, ptr + byteshift, v->length);
	v->len += byteshift + 1;
	i = v->len;
	while (i > 0)
	{
		ptr[i] = ptr[i] << bitshift;
		ptr[i] |= ptr[i - 1] & (((char)255) << 8 - bitshift)
		i -= 1;
	}
	ptr[i] = ptr[i] << bitshift;
	free(v->ptr)
	v->ptr = ptr;
	while (v->ptr[v->len - 1] == 0)
		v->len -= 1;
	return (*v);
}

t_vlq	ft_vlqshift(t_vlq *v, int shift)
{
	if (shift < 0)
		return (right(v, shift * -1))
}
