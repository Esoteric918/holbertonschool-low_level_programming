#include "function_pointers.h"
/**
 * print_name - prints name
 *@name:name to be printed
 *@f: function that takes one argument
 *
 *
 *Returns: char ptr
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
