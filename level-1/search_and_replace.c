#include <unistd.h>

int lenof(char *s)
{
	int len = 0;
	while(s[len] != '\0')
		len++;
	return (len);
}

void print(char *s)
{
	int i; 
	i = 0 ;
	while(s[i] != '\0')	
	{
		write(1,&s[i],1);
		i++;
	}
}

void search_and_replace(char *s1 , char *toRep, char *rep)
{	
	int i = 0;
	if ( lenof(toRep) == 1 && lenof(rep) == 1)
	{
		char c1 = *toRep;
		char c2 = *rep;
		while (s1[i] != '\0')	
		{	
			if (s1[i] == c1)
				write(1,&c2,1);
			else 
				write(1,&s1[i],1);
			i++;
		}
	}
}

int main (int argc,char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1,"\n",1);
	return (0);
}
