#include "main.h"
/**
*flip_bits -  function that returns the number of bits you would need to flip
*@n: first number
*@m: second number
*Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, countbit = 0;
unsigned long int current;
unsigned long int exculsive = n ^ m;
for (a = 63; a >= 0; a--)
{
current = exculsive >> a;
if (current & 1)
countbit++;
}
return (countbit);
}
