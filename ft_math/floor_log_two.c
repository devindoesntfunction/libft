int	floor_log_two(long double d)
{
	return (((*((int*)(((unsigned char*)&d) + 8))) & 0x0000ffff) - 16383);
}
