#include "main.h"

/**
 * _7awel_hex - prints an hexgecimal number.
 * @argument: the number.
 * Return: bytes.
 */
int _7awel_hex(va_list argument)
{
	int i;
	int *array;
	int bytes = 0;
	unsigned int el3adad = va_arg(argument, unsigned int);
	unsigned int num = el3adad;

	while (el3adad / 16 != 0)
	{
		el3adad /= 16;
		bytes++;
	}
	bytes++;
	array = malloc(bytes * sizeof(int));

	for (i = 0; i < bytes; i++)
	{
		array[i] = num % 16;
		num /= 16;
	}
	for (i = bytes - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (bytes);
}
