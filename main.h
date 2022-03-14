#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int _putchar(char c);

int print_c(va_list c);

int print_cp(va_list c);

int print_int(va_list c);

int _printf(const char *format, ...);

int print_int1(int n);

int print_binary(va_list c);

int print_un(va_list c);

/**
 *struct var_type - name of the struct
 *@type: type of the var
 *@func: pointer to function
 */
typedef struct var_type
{
	char type;
	int (*func)(va_list);
} commands;

#endif
