#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char res)
{
	unsigned char bit = 0;
	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 0;
	unsigned char cpy = octet;
	while(i <= 7)
	{
		printf("step %d\n",i);
		// we move res << to the left so we make space for the next number
		res = res << 1;
		print_bits(res);	
		printf("\n");
		// we add the last digit & 1 of octet to res with the help of | operator 
		res = res | (octet & 1);
		print_bits(res);	
		printf("\n");
		// we move octet to the right to get the next digit while the old one goes away
		octet = octet >> 1;
		print_bits(octet);	
		printf("\n");
		i++;	
	}
	printf("int = %d\nstarting from:\n",cpy);
	print_bits(cpy);
	printf("\n");
	return(res);
}



int main(void)
{
	unsigned char res = reverse_bits((unsigned char)5);
	printf("reversed to:\n");
	print_bits(res);
	printf("\n");
	return(0);
}
