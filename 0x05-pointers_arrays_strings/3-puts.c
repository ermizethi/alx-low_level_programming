#include "main.h"
/**
 * _puts - main
 * @str : check
 * Return : 0
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
