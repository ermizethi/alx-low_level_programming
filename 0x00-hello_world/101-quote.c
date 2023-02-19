#include<stdio.h>
/**
 * main-void
 *
 * Description: 'Printing'
 *
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, msg, sizeof(msg));
	return (1);
}
