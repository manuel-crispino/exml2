#include <stdio.h>
#include <unistd.h>

int get_char(char c, char *s2)
{
	int j = 0;
	while(s2[j])	
	{
		if (c == s2[j])
			return (1);
		j++;
	}
	return (0);
}

int get_j(char c, char *s2)
{
	int j = 0;
	while(s2[j])	
	{
		if (c == s2[j])
			return (j);
		j++;
	}
	return (j);
}

void wd_match(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s1[i])
	{
		if (!get_char(s1[i],s2 + j))
		{
			write(1,"\n",1);
			return;
		}
		j = get_j(s1[i],s2);
		i++;
	}
	i = 0;
	while(s1[i])
	{
		write(1,&s1[i],1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wd_match(argv[1],argv[2]);
	return (0);
}
