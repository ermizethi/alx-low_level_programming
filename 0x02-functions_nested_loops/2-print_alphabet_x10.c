#include "main.h"
/**
 * print_alphabet_x10 - 'descripion'
 *
 * Return : 0 always
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char i;

	while (a <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		} _putchar('\n');
		a++;
	}
}
