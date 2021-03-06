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

int print_un(va_list c);

int print_rot13(va_list c);

int print_rev(va_list c);

void rec(unsigned int n);

int print_binary(va_list c);

int print_octal(va_list c);

void octal(unsigned int n);

void hexa(unsigned int n);

int print_hexa(va_list c);

int print_HEXA(va_list c);

void HEXA(unsigned int n);
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
