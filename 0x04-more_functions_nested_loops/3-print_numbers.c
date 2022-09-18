#include "main.h"
/**
 * print_numbers - function that prints numbers
 * New line: to be printed
 * Return: void
 */
void print_numbers(void)
{
	int n;

	while (n <= '9')
	{
		_putchar(n);
		n++
	}
	_putchar("\n");
}

