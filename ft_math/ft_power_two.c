#include <math.h>

long double	ft_power_two(int power)
{
	long double d;

	if (power > 49152)
		return (NAN);
	d = 1.0L;
	power += 16383;
	*((int*)(((unsigned char*)&d) + 8)) = power & 0x0000ffff;
	return (d);
}
