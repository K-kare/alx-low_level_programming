#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - gets the sum of all its parameter
* @n: the number of arguements passed to the function
* Return: the sum of parameter
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned  int i;
int sum = 0;
va_list list;
va_start(list, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}
