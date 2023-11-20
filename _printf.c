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
	int j;
	char *ch;

	va_list argument;
	va_start(argument, format);
	ch = va_arg(argument ,char* );

	while (format && format[i])
	{
		while (*(ch + i) != '\0')
	{
		if ( ch[i] == "%"){
             get_right_function(ch[i+1]);
		}
		_putchar(ch[i]);
		i++;
	}
	}
	printf("\n");
	va_end(argument);
}