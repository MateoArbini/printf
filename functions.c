#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_c - function that prints a char
 *@c: alias of the list of parameters
 *Return: Always 1 because there´s always one char
 **/
int print_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 *print_cp - function that prints a pointer to char
 *@c: alias of the list of parameters
 *Return: i, which is the amount of spaces of the string
 **/
int print_cp(va_list c)
{
	char *str = va_arg(c, char *);
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
	else
	{
		return (0);
	}
}

/**
 *print_int - function that prints an int
 *@c: alias of the list of parameters
 *Return: the number
 */

int print_int (va_list c)
{
	int count = 0;
	int n = va_arg(c, int);
	unsigned int dc, dig, nat = n;
	double f = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
		}
		while (f <= nat)
		{
			f *= 10;
		}
		dc = f / 10;
		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
			count++;
		}
	}
	return (count);
}

