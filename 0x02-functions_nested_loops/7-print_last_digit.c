#include "main.h"
/**
 * print_last_digit- print the last digit
 * @n : the parameter to be checked
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n >= 0)
		return (last_digit);
	else
		return (-last_digit);
}
