#include "main.h"
/**
 * print_all - a function that prints anything.
 * @format: format of arguments
 * @... : the arguments to print
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int THE_PRINT = 0;
	char *ch, *starting;

	va_list argument;
	va_start(argument, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[1] == ' ' && format[0] == '%' && !format[2])
	{
		return (-1);
	}
	for (ch = format; *ch; ch++)
	{
		if (*ch = "%")
		{
			THE_PRINT += _putchar(*ch);
			continue;
		}else{
			get_right_function( ch++);
		}
		ch++;

	}

	va_end(argument);
}