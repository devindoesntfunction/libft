#include "../libft.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	char *sum;

	if (argc != 3)
	{
		printf("Must pass 2 positive decimal integers to add\n");
		return (1);
	}
	sum = ft_stradd(argv[1], argv[2]);
	printf("%s + %s = %s\n", argv[1], argv[2], sum);
	printf("sum[0] = %c\n", sum[0]);
}
