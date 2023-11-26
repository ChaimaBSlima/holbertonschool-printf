#include "main.h"
/**
 * _7awel_oct - convert the numbers to octal
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _7awel_oct(va_list argument)
{
    /* i variable to iterate the digits */
	int i;
    /* an array to allocate the digits then print them */
	int *array;
    /* counting the bytes to return */
	int bytes = 0;
    /* storing the number to convert to a variable 'el3adad'*/
	unsigned int el3adad = va_arg(argument, unsigned int);
    /* A variable to store the number and makes some changes on it
	* ( I don't want to lose the data stored in 'el3adad' because of the changes)
	* that's why I created the new variable 'num' */
	unsigned int num = el3adad;
    
    /* counting the numbers of bytes of a octal number by this iteration   */
	while (el3adad / 8 != 0)
	{
        /* divided by 8 because octal base is 8 */
		el3adad /= 8;
		/* calculating bytes intel bytes -1 */
		bytes++;
	}
	/* bytes +1 to complete the calclulation */
	bytes++;
	/* create an array to store each digit in an empty room in the memory*/
	array = malloc(bytes * sizeof(int));
	/* array iteration */
	for (i = 0; i < bytes; i++)
	{
		/* each case have the right digit of octal code */
		array[i] = num % 8;
		/* divided by 8 because  octal base is 8 */
		num /= 8;
	}
	/* iteration to print the digits of octal code stored in the array*/
	for (i = bytes - 1; i >= 0; i--)
	{
		/* printing the digits stored in the array */
		_putchar(array[i] + '0');
	}
	/* free the allocated memory */
	free(array);
	/* return the bytes */
	return (bytes);
}
