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
	int f = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	} while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
}
