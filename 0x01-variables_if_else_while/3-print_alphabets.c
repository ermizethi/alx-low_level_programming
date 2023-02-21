#include <stdio.h>

/**
 * main - void
 *
 * Description: 'last digit'
 *
 * Return: 0
 */
int main(void)
{
	int c = 'a';
	int d = 'z';
	int e = 'A';
	int f = 'Z';

	while (c <= d)
	{
		putchar(c);
		c++;
	} while (e <= f)
	{
		putchar(e);
		e++;
	}
	putchar('\n');
}
