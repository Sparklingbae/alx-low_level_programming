#include "lists.h"

/**
 * print_listint - Function to print all elements of a linked list if integer
 * size_t printLinkedList(const listint_t *head)
 *@head: linked list of type listint_t to print
 * Return: count of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}
