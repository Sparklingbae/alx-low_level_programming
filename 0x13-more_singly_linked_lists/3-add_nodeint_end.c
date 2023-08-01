#include "lists.h"

/**
 * add_nodeint_end - Function to add a node at the end of a linked list
 * listint_t *addNodeToEnd(listint_t **head, const int data)
 * @head: pointer the first list element
 * @data: to insert in new element
 * Return: pointer to the NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = data;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next)
temp = temp->next;
temp->next = newNode;
}
return (newNode);
}
