#include <stdio.h>
#include "sort.h"

/**
 * printer_list - Prints a list of integers
 * @list: The list to be printed
 */
void printer_list(const listint_t *list)
{
int i;

i = 0;
while (list)
{
if (i > 0)
printf(", ");
printf("%d", list->n);
++i;
list = list->next;
}
printf("\n");
}
