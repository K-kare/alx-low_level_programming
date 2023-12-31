#include "main.h"
/**
*binary_to_uint - function that converts a binary number to an unsigned int
*@b: pointer to the string containing a binary number
*Return: the converted number, or 0 if
*there is one or more chars in the string
*/
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int num;
num = 0;
if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
num <<= 1;
if (b[a] == '1')
num += 1;
}
return (num);
}
