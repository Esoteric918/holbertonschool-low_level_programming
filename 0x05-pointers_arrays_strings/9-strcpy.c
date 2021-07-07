#include "holberton.h"

/**
* _strcpy - copy string
* @dest: address pointed to
* @src: string being pointed to
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int k = 0;

while (src[k] != '\0')
{
dest[k] = src[k];
++k;
}
 dest[k] = '\0';
return (dest);
}
