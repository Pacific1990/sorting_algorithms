#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap_integers(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * my_partition - Order a subset of an array of integers according
 * to the my partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */

int my_partition(int *array, size_t size, int left, int right)
{
int *pivot, above, below;

pivot = array + right;
for (above = below = left; below < right; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
swap_integers(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
swap_integers(array + above, pivot);
print_array(array, size);
}

return (above);
}

/**
 * my_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 */

void my_sorter(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = my_partition(array, size, left, right);
my_sorter(array, size, left, part - 1);
my_sorter(array, size, part + 1, right);
}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

my_sorter(array, size, 0, size - 1);
}
