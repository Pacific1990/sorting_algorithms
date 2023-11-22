#include "sort.h"

#include "stdlib.h"

/**
 * bubble_sort - sorting algorithm
 * @array: array of integers
 * @size: size of the array
 */

void bubble_sort(int *array,  size_t size)
{
int is_swapped = 1, temp;
size_t j = 0;

if (!array || size < 2)
return;
while (is_swapped != 0)
{
is_swapped = 0;
j = 0;
while (j < size - 1)
{
if (array[j] > array[j + 1])
{
_swap(array, j, j + 1);
temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
is_swapped = 1;
print_array(array, size);
}
j++;
}
}
}
