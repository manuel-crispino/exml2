#include <unistd.h>

char isalph(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('z'- ( c - 'a'));
	if (c >= 'A' && c <= 'Z')
		return ('Z'- ( c - 'A'));
	return (c);
}

void alpha_mirror(char *s)
{
	int i=0;
	while(s[i] != '\0')	
	{
		char c = isalph(s[i]);
		write(1,&c,1);
		i++;
	}
}

int main (int argc,char **argv )
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1,"\n",1);
	return (0);
}
