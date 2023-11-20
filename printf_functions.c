#include "main.h"
/**
 * print_char - writes a character to stdout
 * @argument: The character to print
 *
 * Return: void
 */
void print_char(va_list argument){
    _putchar(va_arg(argument, int));
}
/**
 * print_string - writes a string  to stdout
 * @argument: The argument to print
 *
 * Return: void
 */
void print_string(va_list argument){
    char *ch;
    int i;

	ch = va_arg(argument, char *);
    i = 0;
	while (*(ch + i) != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
}
/**
 * print_percent - writes a % to stdout
 * @argument: The percent to print
 *
 * Return: void
 */
void print_percent(va_list argument){
    _putchar(va_arg(argument, int));
}
