#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
README.md int dlen = 0, i;

README.md while (dest[dlen])
README.md {
README.md README.md dlen++;
README.md }

README.md for (i = 0; src[i] != 0; i++)
README.md {
README.md README.md dest[dlen] = src[i];
README.md README.md dlen++;
README.md }

README.md dest[dlen] = 0;
README.md return (dest);
}
