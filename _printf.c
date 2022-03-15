#include "main.h"

/**
 *get_op_func - function caller
 *@s: format
 *Return: pointer to function
 **/
int (*get_op_func(char s))(va_list)
{
	int iterarr = 0;

	commands var_type[] = {
		{'c', print_c},
		{'i', print_int},
		{'s', print_cp},
		{'d', print_int},
		{'u', print_un},
		{'R', print_rot13},
		{'r', print_rev},
		{'b', print_binary}
		{'\0', NULL},
	};

	while (iterarr != 9)
	{
		if (var_type[iterarr].type == s)
		{
			return (var_type[iterarr].func);
		}
		else
		{
			iterarr++;
		}
	}
	return (NULL);
}

/**
 *verifica - validates before running code
 *@c: var type c
 *Return: 1 if it calls a function, 0 otherwise
 **/

int verifica(char c)
{
	char *str = "cisduRrb";
	int t = 7;
	int i = 0;

	while (i <= t)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}


/**
 *_printf - describir funcion
 *@format: parameter given by the user
 *Return: i
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
			{
				if (verifica(format[i + 1]) == 1)
				{
					count += (*get_op_func(format[i + 1]))(list);
					i++;
				}
				else
					_putchar(format[i]), count++;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
				_putchar('%'), i++, count++;
			else if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
			else
				_putchar(format[i]), count++;
		}
	}
	else
		return (-1);
	va_end(list);
	return (count);
}
