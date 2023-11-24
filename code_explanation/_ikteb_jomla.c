#include "main.h"
/**
 *_ikteb_jomla - Print string
 * @argument: the string
 *
 * Return: n (bytes)
 */
int _ikteb_jomla(va_list argument)
{
	/* A variable named jomla to store the string data */
	char *jomla;
    /* A varaible n to store the bytes of the string */
	int n;
    /* Storing the string data*/
	jomla = va_arg(argument, char *);

	/* condition if the string is null write (null) and 
	* returning 6 (the number of bytes in "(null)") */
	if (jomla == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		/* iterating the string intell the end of it */
		/* n iterate the string and calculate the bytes to return (length) */
		for (n = 0; jomla[n] != '\0'; n++)
		{
			/* writing letter by letter*/
			_putchar(jomla[n]);
		}
	}
	/* returning the number of bytes*/
	return (n);
}
