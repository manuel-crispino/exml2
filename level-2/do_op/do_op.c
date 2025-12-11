#include <stdio.h>
#include <stdlib.h>

void do_op(const char *s1, char sum, const char *s2)
{
	int res;	
	int n1 = atoi(s1);
	int n2 = atoi(s2);

	if (sum == '+')
		res = n1 + n2;
	else if (sum == '-')
		res = n1 - n2;
	else if (sum == '*')
		res = n1 * n2;
	else if (sum == '/')
		res = n1 / n2;
	else if (sum == '%')
		res = n1 % n2;
	else 
		return;
	printf("%d",res);
}


int main (int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1],*argv[2],argv[3]);
	printf("\n");
	return (0);
}
