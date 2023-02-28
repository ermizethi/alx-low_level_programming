#include "main.h"
/**
 * _strlen - main
 * @s : input
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
