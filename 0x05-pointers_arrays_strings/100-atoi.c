#include "holberton.h"
/**
 * _atoi - convert a string to an int
 * @str: pointer to an int value to be reset
 *
 * Return: void
 */
int _atoi(char *str)
{
	int res;
	int pu;
	int k = 0;

	res = 0;
	pu = 1;

	while (str[k] != 0)
	{
		if (*str == '-')
			pu = pu * -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		res = (res * 10) + ((*str) - '0');
		str++;
	}
	return (res * pu);
}
