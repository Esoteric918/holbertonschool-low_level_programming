#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
char *leet(char *str)
{

	int g, is, k;
	char lee[] = "43071";
	char IsNt[] = "aAeEoOtTlL";

	for (g = 0; str[g] != '\0'; g++)
	{
		k = 0;
		for (is = 0; is < 5; is++)
		{
			if (str[g] == IsNt[k] || str[g] == IsNt[k + 1])
			{
				str[g] = lee[is];
			}
			k += 2;
		}
	}
	return (str);
}
