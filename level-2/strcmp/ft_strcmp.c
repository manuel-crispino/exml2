#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int res = 0;
	unsigned char *ns1 = (unsigned char *)s1;
	unsigned char *ns2 = (unsigned char *)s2;
	int i = 0;
	while(ns1[i] != '\0' || ns2[i] != '\0')
	{
		if ( ns1[i] != ns2[i])
		{
			res= ns1[i] - ns2[i];
			return (res);
		}
		i++;
	}
	return (res);
}

int main (int argc, char **argv)
{
		int n1; 
		int n2; 
	if (argc == 3)
	{
		n1 = ft_strcmp(argv[1], argv[2]);
		n2 = strcmp(argv[1], argv[2]);
		printf("%d != %d\n",n1,n2);
	if(n1 == n2)
		printf("\033[32mOK!\n\033[0m");
	else if (n1 != n2)
		printf("\033[31mKO!\n\033[0m");
	}
	return (0);
}
