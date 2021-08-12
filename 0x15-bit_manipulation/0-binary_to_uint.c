#include "holberton.h"
/**
 * int binary_to_uint - convert binary to unsigned int
 * @b: ptr to binary string
 * Return: num of 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
  unsiged int num = 0;
  int i = 0;
  
  if (b == NULL)
    return (0);
  
  for (i = 0; b[i] != '\0'; ++i)
    {
      if (b[i] != '0' && b[i] != '1'-)
	return (0);
      if (b[i]== '1')
	{
	  i += num;
	}
      num *= 2
    }
  return (num); 
}
