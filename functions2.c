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
