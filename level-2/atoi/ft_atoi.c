#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_atoi(const char *s)
{
	long res;
	int i;
	char c;
	int sign = 1;

	i = 0;
	res= 0;
	if ( s[i] == ' ' && i == 0)
		i++;
	while(s[i] != '\0')
	{
		c = s[i];
		if ( c == '-' && i == 0)
			sign = - sign;
		else if( c >= '0' && c <= '9')
			res = (res * 10) + c - 48;	
		else if ( s[i] == ' ')
			return ((int)res * sign);
		else 
			return (0);
		i++;
	}
	return ((int)res * sign);
}


int main(int argc, char  **argv)
{
	int n1;
	int n2;
	if (argc == 2)
	{
		n1 = atoi(argv[1]);
		n2 = ft_atoi(argv[1]);
		if (n1 == n2)
			printf("\033[32mOK!\033[0m\n%d == %d", n2, n1);
		else 
			printf("\033[31mKO!\033[0m\n%d == %d", n2, n1);
	}	
	else 
		printf("\033[33mMissing argument!!\033[0m\nrun the programm like the example:\n./ft_atoi '1221'\n");
	return (0);
}
