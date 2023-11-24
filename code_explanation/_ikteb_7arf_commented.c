#include "main.h"
/**
 * _ikteb_7arf -  Print character
 * @argument: the character
 *
 * Return: 1 (byte)
 */
int _ikteb_7arf(va_list argument)
{
	/* writing the character data */
	_putchar(va_arg(argument, int));
	/* returning one byte */
	return (1);
}
