long double	ft_ldexponentiate(long double b, unsigned int x)
{
	if (x == 0)
		return (1.0);
	return (b * ft_ldexponentiate(b, x - 1));
}
