#include "main.h"
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
