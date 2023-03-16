#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
README.md void *night;/*void pointer*/

README.md night = malloc(b);/*allocates memory of b*/

README.md if (night == NULL)/* if night is null terminates with exit*/
README.md {
README.md README.md exit(98);/* exit function terminates the call immediately*/
README.md }
README.md return (night);/* return pointer if malloc is sucessful*/
}
