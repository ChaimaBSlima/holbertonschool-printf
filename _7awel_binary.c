#include "main.h"
/**
 * _7awel_binary - convert the numbers to binary
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _7awel_binary(va_list argument)
{
	int i;
	int *array;
	int bytes = 0;
	unsigned int el3adad = va_arg(argument, unsigned int);
	unsigned int num = el3adad;

	while (el3adad / 2 != 0)
	{
		el3adad /= 2;
		bytes++;
	}
	bytes++;
	array = malloc(bytes * sizeof(int));
	for (i = 0; i < bytes; i++)
	{
		array[i] = num % 2;
		num /= 2;
	}
	for (i = bytes - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (bytes);
}
