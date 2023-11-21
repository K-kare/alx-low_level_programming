#include "lists.h"
/**
*add_nodeint_end - function that adds a new node at the end
*@n: element of a struct list
*@head: pointer to the first node
*Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
ptr = *head;
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
}
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
return (*head);
}
