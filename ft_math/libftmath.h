#ifndef LIBFTMATH_H
# define LIBFTMATH_H
# include <strings.h>
# include <limits.h>

typedef char		t_byte;
enum 			sign			{positive = 1, negative = -1};

typedef struct		s_vlq
{
	size_t		len;
	enum sign	sign;
	t_byte		*ptr;
}			t_vlq;

int			floor_log_two		(long double d);
long double		ft_power_two		(int power);
char			*ft_ldtoa		(long double d, int p);
char			*ft_ftoa		(double f, int p);
int			floor_log_ten		(long double d);
long double		ft_ldexponentiate	(long double b, unsigned int x);
char			*ft_stradd		(char *a, char *b);
t_vlq			ft_itovlq		(int x);
int			ft_vlqtoi		(t_vlq x);
void			ft_vlqfree		(t_vlq *x);
t_vlq			ft_vlqadd		(t_vlq a, t_vlq b);
t_vlq			ft_vlqsubtract		(t_vlq a, t_vlq b);

#endif
