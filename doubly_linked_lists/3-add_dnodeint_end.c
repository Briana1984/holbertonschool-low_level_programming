#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of the list
 *
 * @head: the head of the list
 * @n: the node
 *
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL) /* list is empty */
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
/* traverse the list to find the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;
/* link the new node to the last node */
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
