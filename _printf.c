#include "main.h"
/**
 * _printf - the main function.
 * @format: number of arguments
 *
 * Return: numbers of bytes printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;

	if (!format)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}
			else if (i5dem_yr7am_weldik(format[i + 1]) != NULL)
			{
				j += (i5dem_yr7am_weldik(format[i + 1]))(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(list);
	return (j);
}

/**
 * i5dem_yr7am_weldik - chose the right function
 * @c: character.
 *
 * Return: 0.
 */
int (*i5dem_yr7am_weldik(const char c))(va_list)
{
	print_f printf[] = {
		{'c', _ikteb_7arf},
		{'s', _ikteb_jomla},
		{'d', _ikteb_3adad},
		{'i', _ikteb_3adad},
		{'b', _7awel_binary},
		{'\0', NULL}
	};

	int k;

	for (k = 0; printf[k].input != '\0'; k++)
	{
		if (printf[k].input == c)
		{
			return (printf[k].func);
		}
	}

	return (0);
}
