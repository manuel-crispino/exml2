#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	long n = 0;
	int  i = 0;
	int sign = 1;
	while(s[i])
	{
		if( s[i] == '-')	
		{
			sign = -sign;
		}
		else if (s[i] >= '0' || s[i] <= '9')	
		{
			n = (n * 10) + s[i] - '0' ;
		}	
		i++;
	}
	return((int)n * sign);
}

void print_n(long n)
{
	char c;
	long nc = n;
	if (n >= 10)
		print_n(nc / 10);
	c = nc % 10 + '0';
	write(1, &c, 1);
}

int is_prime(long n)
{
	long i = 2;
	if (n == 2)
		return (1);
	if (n < 2)	
		return (0);
	while(i < n)
	{
		if (n % i == 0)
			return(0);
		i++;
	}
	return (1);
}

void add_a_prime_number(int n)
{
	long i = (long)n;
	long res = 0;
	while ( i >= 2)
	{
		if (is_prime(i))
			res += i;
		i--;
	}
	print_n(res);
}

int main(int argc, char **argv)
{
	int n = 0;
	if(argc == 2)	
	{
		n = ft_atoi(argv[1]);
		if (n > 0)
		{
			printf("%d\n",n);
			add_a_prime_number(n);
		}
		else 
			write(2,"0\n",1);
	}
	else 
		write(2,"0\n",1);
	return (0);
}
