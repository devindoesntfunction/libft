typedef long double t_LD;

typedef unsigned int t_UI;

static t_LD	ft_fast_exp(t_LD b, t_UI x, t_LD a)
{
	if (x == 0)
		return (a);
	else if (!(x % 2))
		return (ft_fast_exp(b * b, x / 2, a));
	else
		return (ft_fast_exp(b, x - 1, a * b));
}

long double	ft_ldexponentiate(long double b, unsigned int x)
{
	return (ft_fast_exp(b, x, 1.0));
}
