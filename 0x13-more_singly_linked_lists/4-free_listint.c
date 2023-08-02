#include "lists.h"

/**
 * free_listint - Program to free linked list memory.
 *
 * @head: pointer that track the first elements in the
 * linked list listint_t.
 *
 * Description: Current_node points to the current node
 * which is being processed.
 *
 * Return: Nothing.
 *
 */

void free_listint(listint_t *head)
{
listint_t *current_node;

while (head)
{
current_node = head;

head = head->next;
free(current_node);
}
}
