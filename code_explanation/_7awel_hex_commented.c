#include "main.h"
/**
 * _7awel_hex - convert the numbers to hexgecimal
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _7awel_hex(va_list argument)
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

	/* counting the numbers of bytes of a hexgecimal number by this iteration   */
	while (el3adad / 16 != 0)
	{
		/* divided by 16 because hexgecimal base is 16 */
		el3adad /= 16;
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
		/* each case have the right digit of hexgecimal code */
		array[i] = num % 16;
		/* divided by 16 because hexgecimal base is 16 */
		num /= 16;
	}
	/* iteration to print the digits of octal code stored in the array*/
	for (i = bytes - 1; i >= 0; i--)
	{
		/* condition : if we have a digit > 98 in decimal base (10 base) like (10,11,12,13,14,15)*/
		if (array[i] > 9)
		/* addition of 7 to have the right convertion of code ASCII
		* 10 + 39 = 49 + 48 (ASCII of '0') = 97 (ASCII of 'a')
		* 11 + 39 = 50 + 48 (ASCII of '0') = 98 (ASCII of 'b')
		* 12 + 39 = 51 + 48 (ASCII of '0') = 99 (ASCII of 'c')
		* 13 + 39 = 52 + 48 (ASCII of '0') = 100 (ASCII of 'd')
		* 14 + 39 = 53 + 48 (ASCII of '0') = 101 (ASCII of 'e')
		* 15 + 39 = 54 + 48 (ASCII of '0') = 102 (ASCII of 'f')
		*/
			array[i] = array[i] + 39;
		/* printing the digits stored in the array */
		_putchar(array[i] + '0');
	}
	/* free the allocated memory */
	free(array);
	/* return the bytes */
	return (bytes);
}
