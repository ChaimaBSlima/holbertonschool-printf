#include "main.h"
/**
 *_ikteb_jomla - Print string
 * @argument: the string
 *
 * Return: n (bytes)
 */
int _ikteb_jomla(va_list argument)
{
	char *jomla;
	int n;

	jomla = va_arg(argument, char *);
	if (jomla == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (n = 0; jomla[n] != '\0'; n++)
		{
			_putchar(jomla[n]);
		}
	}
	return (n);
}
