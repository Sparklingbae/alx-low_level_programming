#include "lists.h"

/**
 * free_listint - Function to free a linked list of integers
 * void freeLinkedList(listint_t *head)
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
