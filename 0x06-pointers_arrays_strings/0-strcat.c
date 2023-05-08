#include "main.h"

/**
 * _strcat -concatenates two string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, *src)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		dest[i] = src[j];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}	
	
