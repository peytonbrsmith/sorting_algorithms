#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {26, 12, 30, 22, 32, 38, 29, 28, 40, 4, 24, 39, 18, 20, 5, 23, 13, 31, 27, 6, 15, 19, 16, 11, 35, 37, 9, 25, 8, 3, 17, 10, 7, 14, 33, 36, 2, 21, 1, 34};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}