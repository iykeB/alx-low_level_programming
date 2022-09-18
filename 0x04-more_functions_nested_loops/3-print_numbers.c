#include "main.h"

/**
 * print_numbers - function that prints numbers
 * New line: to be printed
 * Return: void
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}

