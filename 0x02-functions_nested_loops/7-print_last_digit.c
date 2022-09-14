#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
int x;

	if (n < 0)
		n *= -1;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
