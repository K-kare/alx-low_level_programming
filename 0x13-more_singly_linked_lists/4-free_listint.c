#include "lists.h"
/**
*free_listint -  function that frees a list
*@head: pointer to the first node
*Return: 0
*/
void free_listint(listint_t *head)
{
listint_t *temp;
temp = head;
while (temp != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}
