#include <stdio.h>
/**
 * main - void
 *
 * Description: 'exception'
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = ',';

	while (a <= 9)
	{
		putchar('0' + a);
		a++;
		if (a <= 9)
		{
			putchar(b);
			putchar(' ');

		}
	} putchar('\n');
	return (0);
}
