#include <unistd.h>

int seenbefore(char *s, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (s[i] == s[pos])
			return (1);
		i++;
	}	
	return (0);
}

void inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j] && !seenbefore(s1, i) && !seenbefore(s2,j))
				write(1, &s1[i], 1);
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1,"\n",1);
	return (0);
}
