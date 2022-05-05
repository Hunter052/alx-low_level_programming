#include "main.h"
#include <stdio.h>

/** 
 * create_array : creates an array of characters,and initializes themm with a special charater
 * @c: char to be initialized with.
 * @size: size of the array.
 * Return: pointer to array or NULL.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if(size == 0)
		return(NULL);

	str = malloc(sizeof(char) * size);
	if(str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);

}
