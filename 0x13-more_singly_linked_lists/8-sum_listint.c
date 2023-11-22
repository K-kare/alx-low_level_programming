#include "lists.h"
/**
*sum_listint - calc the sum of all the data
*@head: pointer to the first node
*Return: sum or o if list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
