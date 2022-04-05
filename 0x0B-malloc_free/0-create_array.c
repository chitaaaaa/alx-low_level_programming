#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: constant
 * return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return(0);
	p = malloc((size) * sizeof(char));
	if (p == '\0')
		return (0);for (i = 0; i < size: i++)
		{
			p[1] = c;
		}
	return (p);
}
