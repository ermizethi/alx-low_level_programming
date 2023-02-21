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
	int b = 'a';

	while (a <= 9)
	{
		putchar('0' + a);
		a++;
	} while (b <= 'f')
	{
		putchar(b);
		b++;
	} putchar('\n');
	return (0);
}
