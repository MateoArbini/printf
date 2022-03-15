#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>
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
 *print_rev - function that prints a string reverse
 *@c: alias of the list of parameters
 *Return: i, which is the amount of chars
 **/
int print_rev(va_list c)
{
	int i = 0;
	char *str;

	str = va_arg(c, char *);

	if (str != '\0')
	{
		while (str[i] != '\0')
		{
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(str[i]);
		}	
	}
	else
		return (0);

	return (i);
}
