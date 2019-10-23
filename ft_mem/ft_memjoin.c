#include "../libft.h"

static void	*catch(void *a, size_t a_len, void *b, size_t b_len)
{
	if (!a && !b)
		return (NULL);
	if (!a)
		return (ft_memdup(b, b_len));
	if (!b)
		return (ft_memdup(a, a_len));
}

void	*ft_memjoin(void *a, size_t a_len, void *b, size_t b_len)
{
	void	*ret;
	size_t	i;

	if (!a || !b)
		return (catch(a, a_len, b, b_len));
	if (!(ret = malloc(a_len + b_len)))
		return (NULL);
	i = 0;
	while (i < a_len)
	{
		((char*)ret)[i] = ((char*)a)[i];
		i += 1;
	}
	i = 0;
	while (i < b_len)
	{
		((char*)ret)[a_len + i] = ((char*)b)[i];
		i += 1;
	}
	return (ret);
}
