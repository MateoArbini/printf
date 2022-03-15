#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>
/**
* print_rev - str
*@ch: char
*Return: lenght
**/
int print_rev(va_list ch)
{
	char *cadena;
	int i = 0, cont = 0;

	cadena = va_arg(ch, char*);

	if (cadena != NULL)
	{
		if (cadena[0] == '\0')
			return (0);

		while (cadena[i] != '\0')
			i++;

		cont = i;

		for (i--; i >= 0; i--)
			_putchar (cadena[i]);
	}
	else
		return (0);

	return (cont);
}

/**
 *rec - function that gives you the binary number
 *@n: given number by the user
 **/
void rec(unsigned int n)
{
	if (n / 2)
	{
		rec(n / 2);
		_putchar(n % 2 + 48);
	}
	else
	{
		_putchar(n % 2 + 48);
	}
}

/**
 *print_binary - function that prints the binary number
 *@c: alias of the list of parameters
 *Return: y, which is the counter of chars
 **/
int print_binary(va_list c)
{
	unsigned int x;
	int y;

	x = va_arg(c, unsigned int);

	rec(x);

	for (y = 0; x / 2; y++)
	{
		x /= 2;
	}
	return (y + 1);
}

/**
 *octal - function that gives you the octal number
 *@n: given number by the user
 **/
void octal(unsigned int n)
{
	if (n / 8)
	{
		octal(n / 8);
		_putchar(n % 8 + 48);
	}
	else
	{
		_putchar(n % 8 + 48);
	}
}

/**
 *print_octal - function that prints the octal number
 *@c: alias of the list of parameters
 *Return: y, which is the counter of chars
 **/
int print_octal(va_list c)
{
	unsigned int x;
	int y;

	x = va_arg(c, unsigned int);

	octal(x);

	for (y = 0; x / 8; y++)
	{
		x /= 8;
	}
	return (y + 1);
}
