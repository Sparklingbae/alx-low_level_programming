#include "lists.h"

/**
 * listint_len - Function to get the number of elements in a linked list
 * size_t getLinkedListLength(const listint_t *head)
 * @head: linked list of type listint_t
 * Return: count of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
