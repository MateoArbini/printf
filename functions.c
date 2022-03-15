#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>

/**
 *print_cp - function that prints a pointer to char
 *@c: alias of the list of parameters
 *Return: i, which is the amount of spaces of the string
 **/
int print_cp(va_list c)
{
	char *str = va_arg(c, char *);
	int i;
	int count = 0;
	char *null = "(null)";
	int e;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]), count++;
		}
	}
	else if (str == NULL)
	{
		for (e = 0; null[e] != '\0'; e++)
		{
			_putchar(null[e]);
		}
			count = 6;
	}
	return (count);
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
		count++;
	}
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-'), count++;
		}
		while (f <= nat)
			f *= 10;
		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0'), count++;
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
	return (count);
}

/**
 *print_un - function that prints an unsigned int
 *@c: alias of the list of parameters
 *Return: count
 **/
int print_un(va_list c)
{
	int count = 0;
	int n = va_arg(c, int);
	unsigned int dc, dig, nat = n;
	double f = 1;

	if (n == 0)
		_putchar('0');

	else
	{
		while (f <= nat)
			f *= 10;

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

/**
 *print_rot13 - traduce letras a rot13
 *@c: string
 *Return: i which is the counter of characters
 **/
int print_rot13(va_list c)
{
	int i = 0;
	char *str = va_arg(c, char *);

	while (str[i] != '\0')
	{
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				_putchar(str[i + 13]);
			}
			else
			{
				_putchar(str[i - 13]);
			}
		}
		_putchar(str[i]);
	}
	}
	return (i);
}
