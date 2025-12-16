#include <stdlib.h>
#include <unistd.h>

int cameLen(char *s)
{
	int len = 0;
	int i = 0;
	while(s[len])
	{
		if (s[len] == '_')
			i++;
		len++;
	}
	return (len - i);
}

void ft_print(char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1,&s[i],1);
		i++;
	}
}

void snake_to_camel(char *s1)
{
	int len= cameLen(s1); 
	int i = 0;
	int j = 0;
	char *s = (char *)malloc(len + 1);
	int nextIsCapital = 0;
	if(!s)	
		return;
	while(s1[i])	
	{
		if (nextIsCapital && s1[i] >= 'a' && s1[i] <= 'z')
			s[j] = s1[i] - 32; 
		else if (s1[i] != '_')
			s[j] = s1[i];
		nextIsCapital = 0;
		if (s1[i] == '_')
		{
			nextIsCapital = 1;
			j = j - 1;
		}
		i++;
		j++;
	}
	ft_print(s);
}

int main(int argc , char **argv)
{
	if (argc == 2)	
		snake_to_camel(argv[1]);
	write(1,"\n",1);
	return (0);	
}
