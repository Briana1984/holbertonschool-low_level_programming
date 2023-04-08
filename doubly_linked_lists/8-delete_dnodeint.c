#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given index of a list.
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if the node was successfully deleted, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;
if (*head == NULL) /* empty list */
return (-1);
if (index == 0) /* delete head node */
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
/* traverse to find the node at the given index */
for (i = 0; current != NULL && i < index; i++)
current = current->next;
if (current == NULL) /* index is greater than the length of the list */
return (-1);
/* update adjacent nodes' pointers */
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
