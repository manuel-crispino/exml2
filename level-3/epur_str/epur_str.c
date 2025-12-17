#include <unistd.h>

int ft_len(char *s)
{
	int len = 0;
	while(s[len])
		len++;
	return(len);
}

void ft_print(char *s)
{
	int i =0;
	int space = 0;
	int finish = 0;
	while(!finish)
	{
		if(s[i] > 32 && s[i] < 127)
		{
			while(s[i])
			{
				space = 0;
				while (s[i] == ' ' && s[i+1] != '\0')
				{
					i++;
					space++;
				}
				if (space > 0 && s[i+1] != '\0')
					write(1," ",1);
				if( s[i] > 32 && s[i] < 127)
					write(1,&s[i],1);
				i++;	
			}
			finish = 1;
		}
		else
			i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2 && ft_len(argv[1]) > 0)
		ft_print(argv[1]);
	write(1,"\n",1);
	return (0);
}
