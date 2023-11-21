 #include "lists.h"
/**
*print_listint - prints the element of listint_t
*@h: the header pointer to the list
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count;

for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
