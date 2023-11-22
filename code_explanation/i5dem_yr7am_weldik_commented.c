#include "main.h"
/**
 * i5dem_yr7am_weldik - chose the right function
 * @c: character.
 *
 * Return: 0.
 */
int (*i5dem_yr7am_weldik(const char c))(va_list)
{
    /*
    * A struct with new type "print_f" to store each function 
    * with the right specifier 
    */
	print_f printf[] = {
		{'c', _ikteb_7arf},
		{'s', _ikteb_jomla},
		{'d', _ikteb_3adad},
		{'i', _ikteb_3adad},
		{'\0', NULL}
	};
   /* k to iterate the struct printf[]*/
	int k;
    /* the iteration intel the end of the struct */
	for (k = 0; printf[k].input != '\0'; k++)
	{
        /*checking if the specifer exist in the struct*/
		if (printf[k].input == c)
		{
            /* returning the number of byte of each type bazed in the function */
			return (printf[k].func);
		}
	}
   /* if the specifer dosen't exist return 0 byte*/ 
	return (0);
}