#include "function_pointers.h"
/**
 * array_iterator -
 *@array: array that functions will be passed to 
 *@size:  size of the array
 *@action: function pointer
 *
 *Returns: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
