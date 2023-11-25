#include "main.h"

/**
 * _7awel_oct - prints an octal number.
 * @argument: the number.
 * Return: bytes.
 */
int _7awel_oct(va_list argument)
{
	int i;
	int *array;
	int bytes = 0;
	unsigned int el3adad = va_arg(argument, unsigned int);
	unsigned int num = el3adad;

	while (el3adad / 8 != 0)
	{
		el3adad /= 8;
		bytes++;
	}
	bytes++;
	array = malloc(bytes * sizeof(int));

	for (i = 0; i < bytes; i++)
	{
		array[i] = num % 8;
		num /= 8;
	}
	for (i = bytes - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (bytes);
}
