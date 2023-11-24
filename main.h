#ifndef __PRINTF_PROJECT__
#define __PRINTF_PROJECT__

/* Libraies to include*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct types - specifier structure for printf
 * @input: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */
typedef struct types
{
	char input;
	int (*func)(va_list);
} print_f;

/* putchar function */
int _putchar(char c);

/* Functions to operate */
int _ikteb_3adad(va_list argument);
int _ikteb_jomla(va_list argument);
int _ikteb_7arf(va_list argument);
int _7awel_binary(va_list argument);

/* _printf main function*/
int _printf(const char *format, ...);
/* The function that select the right function to operate*/
int (*i5dem_yr7am_weldik(const char c))(va_list);


#endif /*__PRINTF_PROJECT__*/
