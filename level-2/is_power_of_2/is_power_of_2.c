#include <stdio.h>

int is_power_of_2( int n)
{
	if (n <= 0)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 != 0)
		return (0);
	return(is_power_of_2(n/2));
}

int main(void)
{
	printf("1 %d\n",is_power_of_2(2));
	printf("0 %d\n",is_power_of_2(21));
	printf("0 %d\n",is_power_of_2(22));
	printf("1 %d\n",is_power_of_2(16));
	printf("0 %d\n",is_power_of_2(0));
	printf("1 %d\n",is_power_of_2(32));
	printf("0 %d\n",is_power_of_2(10));
	printf("1 %d\n",is_power_of_2(64));
	return (0);
}
