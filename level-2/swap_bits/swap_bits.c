#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char octal)
{
	int byte = 0;
	int i = 7;
	while(i >= 0)
	{
		octal = octal >> i;	
		byte = octal & 1;	
		write(1,&byte,1);
		i--;
	}
}

int main (void)
{
	unsigned char b = 2;
	print_bits(b);
	return (0);
}
