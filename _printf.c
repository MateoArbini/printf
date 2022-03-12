#include "main.h"

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, j;

	va_list list;

	commands var_type[] = {
		{'c', print_c},
		{'i', print_int},
		{'s', print_cp},
		{'d', print_int},
		{'\0', NULL}
	};

	va_start (list, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '%')
			{
				j = 0;
				while (j != 5)
				{
					if (format[i + 1] == var_type[j].type)
					{
						var_type[j].func(list);
						i++;
						break;
					}
					else 
					{
						j++;
					}
				}
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
			else
			{
				_putchar(format[i]);
			}
		}
	}
	va_end(list);
	return (i);
}
