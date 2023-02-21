#include <stdio.h>
/**
 * main - void
 *
 * Description: 'exception'
 * Return: 0
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	} putchar('\n');
	return (0);
}
