#include "lists.h"
#include <stdio.h>
/**
*print_listint - prints the element of listint_t
*@h: the header pointer to the list
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
