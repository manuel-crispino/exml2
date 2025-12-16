#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
	unsigned char c;
	int i = 7;
	while(i >= 0)
	{
		c = ((octet >> i) & 1)+ '0';	
		write(1,&c,1);
		i--;
	}
	write(1,"\n",1);
}

unsigned char swap_bits(unsigned char octet)
{
	int i = 3;	
	unsigned char res;
	while(i >= 0)	
	{
			res = res << 1;
			res = res | ((octet >> i) & 1);
		i--;	
	}
	i = 7;
	while(i >= 4)	
	{
			res = res << 1;
			res = res | ((octet >> i) & 1);
		i--;	
	}	
	return (res);	
}

int main (void)
{
	unsigned char b = 105;
	print_bits(b);
	b = swap_bits(b);
	print_bits(b);
	return (0);
}
