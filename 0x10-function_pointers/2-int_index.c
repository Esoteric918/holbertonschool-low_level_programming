#include "function_pointers.h"
/*
 * int_index - returns index of 1st elem for which cmp func doesnt rtn 0
 * @array: array of int to be srch
 * @size: num of elem in array
 * @cmp: ptr to function that compares values
 * 
 * Return: int
 * 
 */
 int int_index(int *array, int size, int (*cmp)(int))
 {
     int i;

     if (cmp <= 0)
     {
         return (-1);
         if (array && size && cmp)
         {
             for (i = 0; i < size; ++i)
             cmp(array[i]);
             return (cmp);
         }
     }
     return (-1);

 }