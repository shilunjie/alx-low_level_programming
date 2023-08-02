#include "lists.h"

/**
 * add_nodeint_end - Program to add a new node at end
 * of linked list.
 *
 * @head: Pointer that keeps track of the end node
 * of a linked list: list_t
 * @n: int parameter passed to function.
 *
 * Return: Address of new element or NULL if it fails.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest_node;
	listint_t *latest_end;

	latest_end = *head;

	latest_node = malloc(sizeof(listint_t));

	if (!latest_node)
		return (NULL);

	latest_node->n = n;
	latest_node->next = NULL;

	if (*head == NULL)
	{
		*head = latest_node;
		return (latest_node);
	}

	while (latest_end->next)
	{
		latest_end = latest_end->next;
	}
		latest_end->next = latest_node;

	return (latest_node);
}
