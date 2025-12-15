#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 7;
	unsigned char c; 
	while(i >= 0)
	{	
		//  >> move bits i times & 1 keep the digit how it is whiel & 0 change all digit to 0
		// then + '0'; transform the digit into a printable char ;
		c = ((octet >> i) & 1 ) + '0';	
		write(1,&c,1);
		i--;
	}
}
	
int main(void)
{
	print_bits(2);
	write(1,"\n",1);
	print_bits(4);
	write(1,"\n",1);
	print_bits(255);
	write(1,"\n",1);
	print_bits(3);
	write(1,"\n",1);
	return (0);
}
