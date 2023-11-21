#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of linked list
*@n: element of linked list
*@head: pointer to the first node of the linked list
*Return: address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
ptr->n = n;
ptr->next = NULL;
ptr->next = *head;
*head = ptr;
if (head != NULL)
{
return (ptr);
}
else
{
return (NULL);
}
}
