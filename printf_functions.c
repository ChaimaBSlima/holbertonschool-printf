#include "main.h"
/**
 * _ikteb_7arf -  Print character
 * @argument: the character
 *
 * Return: 1 (byte)
 */
int _ikteb_7arf(va_list argument)
{
	_putchar(va_arg(argument, int));
	return (1);
}
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
/**
 * _ikteb_3adad - Print number
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _ikteb_3adad(va_list argument)
{

	long int _3adad;
	int n, i9leb, base;

	n = 0;
	_3adad = va_arg(argument, int);

	if (_3adad < 0)
	{
		_3adad *= -1;
		_putchar(45);
		n++;
	}
	if (_3adad >= 0 && _3adad <= 9)
	{
		_putchar(_3adad + 48);
		n++;
	}
	if (_3adad > 9)
	{
		base = 10;

		while (_3adad / base > 9)
		{
			_3adad *= 10;
		}

		while (_3adad > 0)
		{
			i9leb = _3adad / base;
			_3adad = _3adad % base;
			_putchar(i9leb + 48);
			_3adad = _3adad / 10;
			n++;
		}
	}
	return (n);
}
