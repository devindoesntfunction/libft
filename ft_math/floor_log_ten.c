int	floor_log_ten(long double d)
{
	int ret;

	if (d < 0)
		d *= -1;
	ret = 0;
	while (d >= 10)
	{
		ret += 1;
		d /= 10;
	}
	if (ret)
		return (ret);
	while (d < 1)
	{
		ret -= 1;
		d *= 10;
	}
	return (ret);
}
