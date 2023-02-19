#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19 ";
        write(1, msg, sizeof(msg));	
	return (1);
}
