#include <unistd.h>

void nextLine(void)
{
	write(1,"\n",1);
}


char shift(char c)
{
	char res; 
	if (c == 'z')
		res = 'a';
	else if (c == 'Z') 
		res = 'A';
	else
		res = (c + 1);
	return (res);
}

void print(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			char c = shift(s[i]) ;
			write(1,&c,1);
		}
		else
			write(1,&s[i],1);
		i++;
	}
	nextLine();
}


int main (int argc, char **argv)
{
	if (argc == 2)
		print(argv[1]);
	else 
		nextLine();
	return (0);
}
