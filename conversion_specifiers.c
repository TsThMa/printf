#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_i - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */
int print_i(va_list i)
{
	int a[10];
	int j = 1;
	int m = 1000000000;
	int n;
	int sum = 0;
	int counter = 0;

	n = va_arg(i, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if ((sum != 0) || (j == 9))
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
