#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *charset)
{
	size_t i;	
	size_t j;	
	char c;
	i = 0;
	
	while(s[i] != '\0')
	{
		c = s[i];
		j = 0;
		while(charset[j] != '\0')
		{
			if (c == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main(int argc , char **argv)
{
	if (argc == 3)
	{
		size_t n =strcspn(argv[1], argv[2]);	
		printf("%zu\n",n);
		size_t n2 =ft_strcspn(argv[1], argv[2]);	
		printf("%zu\n",n2);
	}
	return (0);
}
