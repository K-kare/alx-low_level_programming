#include "lists.h"
/**
*get_nodeint_at_index - function that returns the nth node
*@head: pointer to the first node
*@index: the index of the node
*Return: the nTH node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (count < index)
{
if (head == NULL)
{
return (NULL);
}
count++;
head = head->next;
}
return (head);
}
