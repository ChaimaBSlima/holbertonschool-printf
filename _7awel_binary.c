#include "main.h"
/**
 * _ikteb_3adad - Print number
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _7awel_binary(va_list argument)
{

	int bytes = 0;
	int a[32], n, i;
	n = va_arg(argument, unsigned int);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar((a[i] + 48));

		bytes += 1;
	}
	return (bytes);
}
