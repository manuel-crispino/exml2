#include <unistd.h>

void print_ascii(char *s)
{
	int index = 0;
	while(s[index] > 32 && s[index] < 127)
	{
		write(1, &s[index], 1);
		index++;
	}
}

void last_word( char *s)
{
	int i = 0;
	int word_count = 0;
	int index = 0;
	int start = 0;
	while(s[i])
	{
		if (s[i] > 32 && s[i] < 127 && start == 0)	
		{
			word_count = 1;
			index= i;
			start = 1;
		}
		if ( s[i] == ' ' || s[i] == '\0' || s[i] == '\t')
			start = 0;
		i++;
	}
	if (word_count > 0)
		print_ascii(s + index);
}

int main(int argc , char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1,"\n",1);
	return (0);
}
