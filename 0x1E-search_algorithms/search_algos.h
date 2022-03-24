#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_helper(int *arr, size_t lo, size_t hi, int val);
void print_helper(int *arr, size_t lo, size_t hi);

#endif /* search_algos.h */
