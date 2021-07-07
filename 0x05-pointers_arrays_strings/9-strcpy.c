#include "holberton.h"

/**
 *_strcpy - copy string 
 *@dest: address pointed to 
 *@src: string being pointed to 
 *Return
 */
char *_strcpy(char *dest, char *src)
{
  int k;
  
  while((dest[k] = src[k]) != '\0')
    {
      ++k;
    }
  return(dest);
}
