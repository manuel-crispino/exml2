#include <stdio.h>
#include <stdlib.h>

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = 0;
	while( i < len)
	{
		if (tab[i] > max)	
			max = tab[i];
		i++;
	}
	return (max);
}


int main (int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if (argc > 0)
	{
		int tab[argc - 1];
		while(i < argc)
		{
			tab[j]= atoi(argv[i]);
			j++;
			i++;
		}
		printf("%d\n",max(tab,j));
	}
	return (0);
}
