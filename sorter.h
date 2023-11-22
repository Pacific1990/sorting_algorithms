#ifndef _SORTER_H_
#define _SORTER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define UP 0
#define DOWN 1

/**
 * enum my_bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum my_bool
{
false = 0,
true
} my_bool;

/**
 * struct my_listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct my_listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} my_listint_t;

void printer_array(const int *array, size_t size);
void printer_list(const my_listint_t *list);
void my_bubble_sort(int *array, size_t size);
void my_insertion_sort_list(my_listint_t **list);
void my_selection_sort(int *array, size_t size);
void my_quick_sort(int *array, size_t size);
void my_shell_sort(int *array, size_t size);
void my_cocktail_sort_list(my_listint_t **list);
void my_counting_sort(int *array, size_t size);
void my_merge_sort(int *array, size_t size);
void my_heap_sort(int *array, size_t size);
void my_radix_sort(int *array, size_t size);
void my_bitonic_sort(int *array, size_t size);
void my_quick_sort_hoare(int *array, size_t size);

#endif /* _SORT_H_ */
