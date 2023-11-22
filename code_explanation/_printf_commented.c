#include "main.h"
/**
 * _printf - the main function.
 * @format: number of arguments
 *
 * Return: numbers of bytes printed.
 */
int _printf(const char *format, ...)
{
	/*create an empty room to store the arguments*/
	va_list list;
	/* the variable i is to iterate the first string argument*/
	/* the variable j is to store the numbers of bytes*/
	unsigned int i = 0, j = 0;
    
	/* First condition : printf() 
	* A printf with a null paramater return an error (-1 byte)
	*/
	if (!format)
		return (-1);

    /* starting by storing the first argument */
	va_start(list, format);

	/* itreate the first string argument
	 * [printf("azert %s",str) --> "azert %s" ]*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*check the existince of '%' */
		if (format[i] == '%')
		{
			/* condition 2 : printf("az%",a)
			* A printf without a specifier return Error (-1 byte)
			*/
			if (format[i + 1] == '\0')
				return (-1);
            
			/* condition 3 : printf("%%")
			* Output: % ; number of bytes : 1 (stored in j);
			* i moves to the next character
			*/
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}

			/* condition 4 : printf("%d",a)
			* Output: the a value ; number of bytes : the a bytes (stored in j);
			* i5dem_yr7am_weldik : the function that will chose the right function to the right specifier
			* i moves to the next character
			*/
			else if (i5dem_yr7am_weldik(format[i + 1]) != NULL)
			{
				j += (i5dem_yr7am_weldik(format[i + 1]))(list);
				i++;
			}

			/* condition 5 : printf("a = %d",a)
			* Output: a = (the a value) ;number of bytes :2 + the a bytes (stored in j);
			* print the charcters present in the sring 'a='
			*/
			else
			{
				_putchar(format[i]);
				j++;
			}
		}

		/* condition 5 : printf("xyz")
		* Output: xyz ; number of bytes : 3 (stored in j);
		* print the charcters of the sring 'xyz'
		*/
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	
	/* frees the empty room */
	va_end(list);
	/* returning the numbers of bytes */
	return (j);
}
