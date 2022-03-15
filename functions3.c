#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>

/**
 *rec_hexa - function that gives you the hexa number
 *@num: user given number
 **/
void rec_hexa(unsigned int num)
{
	int dif;

	if (num / 16)
	{
		rec_hexa(num / 16);
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar(dif + '@');
		}
		else
			_putchar(num % 16 + '0');
	}
	else
	{
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar(dif + '@');
		}
		else
			_putchar(num % 16 + '0');

	}
}

/**
 *print_hexa - function that prints the hexa number
 *@c: alias of the list of parameters
 *Return: iter + 1, total amount of chars
 **/

int print_hexa(va_list c)
{
	int num;
	unsigned int iter;

	iter = va_arg(c, unsigned int);

	rec_hexa(iter);

	for (num = 0; iter / 16; num++)
	{
		iter = iter / 16;
	}
	return (num + 1);
}
