#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: double pointer to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}
}
