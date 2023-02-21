#include <stdlib.h>
#include <time.h>
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

	while (c <= d)
	{
		putchar(c);
		c++;
		putchar("\n");
	}
	return (0);
}
