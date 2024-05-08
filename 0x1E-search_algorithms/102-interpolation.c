#include "search_algos.h"
/**
*interpolation_search - searches for a value in a sorted array of integers
*@array: pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*Return: value is not present in array or
*if array is NULL, your function must return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
int high = size;
int low = 0;
while (value >= array[low] && value <= array[high] && low <= high)
{
size_t pos = low + (((double)(high - low) /
(array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
return (pos);
if (array[pos] > value)
high = pos - 1;
else
low = pos + 1;
}
return (-1);
}


