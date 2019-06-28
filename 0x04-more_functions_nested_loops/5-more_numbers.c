#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *				  followed by a new line.
 *
 * Return: Always void (no value)
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
