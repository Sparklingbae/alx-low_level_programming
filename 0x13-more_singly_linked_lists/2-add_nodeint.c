#include "lists.h"

/**
 * add_nodeint - Functions to add a new node at the beginning of a linked list
 * listint_t *addNodeToFront(listint_t **head, const int data)
 * @n: data to insert in new node
 * @head: pointer to the new node in the list
 * Return: pointer to the null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
