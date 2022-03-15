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

		for (i = i; i >= 0; i--)
			_putchar (cadena[i]);
	}
	else
		return (0);
	
	return (cont);
}

