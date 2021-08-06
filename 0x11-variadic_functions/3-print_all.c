#include "variadic_functions.h"
/**
 * print_all - prints all the things
 * @format: type arguments
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, sp = 0;
	va_list ap;
	char *str;

	while (format == NULL)
	{
		printf("\n");
		return;
		}
	va_start(ap, format);
	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			sp = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			sp = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			sp = 1;
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			sp = 1;
			break;
		}
		if (format[i] != '\0' && sp == 1)
			printf(", ");
		sp = 0;
	}
	printf("\n");
	va_end(ap);
}
