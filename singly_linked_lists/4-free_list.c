#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - main
 * @head: it is linked list
 * Return: evryth is empty
 *
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
