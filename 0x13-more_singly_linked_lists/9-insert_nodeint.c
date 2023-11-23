#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@head: pointer to the first node
*@idx: index where node should be added
*@n: element of node
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ptr;
listint_t *head2 = malloc(sizeof(listint_t));
ptr = *head;
head2->n = n;
head2->next = NULL;
if (idx == 0)
{
ptr = head2;
return (head2);
}
for (i = 0; i < idx; i++)
{
ptr = ptr->next;
}
if (ptr == NULL)
{
return (NULL);
}
else
{
head2->next = ptr->next;
ptr->next = head2;
}
return (*head);
}
