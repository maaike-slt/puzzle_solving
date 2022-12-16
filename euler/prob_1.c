#include <stdio.h>

int	main(void)
{
	int	i;
	int	sum;

	sum = 0;
	i = 1;
	while (i <= 999)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	printf("i:\t%d\n", i);
	printf("sum:\t%d\n", sum);
}
