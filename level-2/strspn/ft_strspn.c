#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *charset)
{
	char c;
	ssize_t i = 0;	
	ssize_t j;	
	int found;

	while (s[i] != '\0')
	{ 
		j = 0;
		c = s[i];
		found = 0;
		while(charset[j] != '\0' && !found)	
		{
			if (charset[j] == c)
				found = 1;
			j++;
		}
		if (!found)
			return (i);
		i++;
	}
	return (i); }

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t n = strspn(argv[1],argv[2]);
		size_t n2 = ft_strspn(argv[1],argv[2]);
		printf("%zu == %zu ?\n",n,n2);
		if (n == n2)
			printf("OK!\n");
		else
			printf("KO!\n");
	}	
		
	return (0);
}
