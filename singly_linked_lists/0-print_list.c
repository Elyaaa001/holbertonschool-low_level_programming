#include "lists.h"

/**
 * print_list - main
 * @h:our lone of trut
 */

size_t print_list(const list_t *h);
{
	int countofnode = 0;
	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf ("[0]"\n);
	}
	else 
	{
	printf("[%d]%s\n", h->len, h-str);
	}
		
countofnode++;
h = h->next;
	}
	return(countofnode);
}
