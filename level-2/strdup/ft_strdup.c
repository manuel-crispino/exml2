#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_lenof(const char *s)
{
	size_t len;
	len =0;
	while(s[len])
		len++;
	return (len);
}

char *ft_strdup( const char *s1)
{
	char * s2;
	size_t len = ft_lenof(s1);	
	size_t i = 0;
	
	if (!s1)
		return (NULL);	
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while(s1[i])
	{
		s2[i]= s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);	
}

int main (int argc, char **argv)
{
	if (argc == 2) 
	{
		char *s1 = ft_strdup(argv[1]);
		char *s2 = strdup(argv[1]);
		printf("%s == %s ?\n",s1,s2);
		if (strcmp(s1,s2) == 0)
			printf("OK !");
		else
			printf("KO !");
		printf("SIZE: %zu == %zu ?\n",ft_lenof(s1),ft_lenof(s2));
		
	}
	return (0);
}
