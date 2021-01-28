#ifndef _SORT_H_
#define _SORT_H_

/* Needed Headers */
#include <stdlib.h>
#include <stdio.h>

/* Holberton Structs */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Holberton Given/Used Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* My Functions */
void bubble_sort(int *array, size_t size);
int check_sort(int *array, size_t size);
void swap(int *first, int *second);

#endif /* _SORT_H_ */
