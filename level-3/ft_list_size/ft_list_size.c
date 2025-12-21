#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_list_size( t_list *begin_list)
{
	int len ;

	len = 0;
	while(begin_list)	
	{
		len++;
		begin_list = begin_list -> next;
	}
	return (len);
}

int main (int argc, char **argv)
{
		
	if (argc > 1)
	{
		// 	imagine this like an array of pointers where we need to know the start and the end
		//	new will be our buffer where we take the value and immediately add it into something our Tail or Head 
		//	head will be the start of our array of pointer 
		//	tail will be the tail so the end of our array of pointers   
		t_list *new;
		t_list *head= NULL;
		t_list *tail= NULL;
		int i = 1;
		while(i < argc)	
		{
			new = malloc(sizeof(t_list));
			new->data = argv[i];	
			new->next = NULL;
			if (!head)
				head = new;
			else
				tail->next = new;
			tail = new;
			i++;
			printf("Nuovo nodo creato: %p, data: %s, next: %p\n", new, (char *)new->data, new->next);
			printf("Head: %p, Tail: %p\n", head, tail);
			printf("Tail->next:%p\n",tail->next);
			printf("Head->next:%p\n",head->next);
		}
			printf("total lenght of t_list is : %d\n",ft_list_size(head));
	}
	return (0);	
}
