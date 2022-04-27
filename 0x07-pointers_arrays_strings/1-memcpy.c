#include "main.h"
/**
  *_memcpy - copies n bytes from memory area src
  *to memory area dest.
  *pointer to destination.
  *pointer to source string.
  *number of bytes to be coppied.
  *
  *Return: pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}
