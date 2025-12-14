#include <stdio.h>
#include <string.h>

char *ft_strpbrk(char *s1, char *s2)
{

	size_t i = 0;
	size_t j = 0;
	while( s1[i] != '\0')	
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j] )
				return (s1 + i);
			j++;
		}
		i++;
	}
		
	return (NULL);
}

int main( int argc, char **argv)
{
	if (argc == 3)
	{
		char *s1= strpbrk(argv[1],argv[2]);
		char *s2= ft_strpbrk(argv[1],argv[2]);
		printf("%s == %s\n",s1,s2);
	}

	return (0);
}
