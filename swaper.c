#include <stdio.h>
#include "sort.h"

/**
 * swaper - Function that swaps two values
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swaper(int *a, int *b)
{
int tmp;

tmp = *b;
*b = *a;
*a = tmp;
}
