#include <unistd.h>
void newLine(void)
{
	write(1,"\n",1);
}

void print(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write(1,&s[i],1);
		i++;
	}
	newLine();
};

int main(int argc,char **argv)
{
	if (argc < 1)
		newLine();
	else 
		print(argv[1]);
	return (0);
}
