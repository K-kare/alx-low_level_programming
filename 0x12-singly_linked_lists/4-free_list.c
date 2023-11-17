#include "lists.h"
/**
*free_list - free a list of nodes, and set the
*head to null
*@head:pointer to the first element of the list
*/
void free_list(list_t *head)
{
list_t *temp;
if (head == NULL)
return;
while ((head->next != NULL))
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
free(head->str);
free(head);
}
