#include <stdio.h>
#include <stdlib.h>

int get_n_len(int i,int n)
{
	int len= 0;
	while(i <= n)
	{
		i++;
		len++;	
	}	
	return(len);
}

int *n_cpy(int i,int n,int *res)
{
	int len= 0;
	while(i <= n)
	{
		res[len]= i;
		i++;
		len++;	
	}	
	return(res);
}

int *ft_range(int n1, int n2){
	int len = 0;
	int *res;
	if (n1 < n2)
		len = get_n_len(n1, n2);
	else if (n1 > n2)
		len = get_n_len(n2, n1);
	res = malloc(len * sizeof(int));
	if (!res)
		return (NULL);
	if (n1 < n2)
		res =n_cpy(n1, n2,res);
	if (n1 > n2)
		res =n_cpy(n2, n1,res);
	return (res);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 3)
	{
		int  n1 =atoi(argv[1]);
		int  n2 =atoi(argv[2]);
		int  len = 0;
		int *arr_n = ft_range(n1,n2);
		if (n1 < n2)
			len = get_n_len(n1,n2);
		if (n1 > n2)
			len = get_n_len(n2,n1);
		printf("%d\n",len);
		while(i < len)
		{
			printf("%d ",arr_n[i]);
			i++;
		};
		free(arr_n);	
	}
	return (0);
}
