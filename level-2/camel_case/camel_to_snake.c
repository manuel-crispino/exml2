#include <unistd.h>

void camel(char *s)
{
	int i = 1;
	char c;

	write(1,&s[0],1);
	while(s[i] != '\0')
	{
		c = s[i];	
		if(c >= 'A' && c <= 'Z' )
		{
			write(1,"_",1);
			c = c + 32;
		}
		write(1,&c,1);
		i++;	
		
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		camel(argv[1]);	
	write(1,"\n",1);
	return(0);
}
