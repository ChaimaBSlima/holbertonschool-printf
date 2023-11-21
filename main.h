#ifndef __PRINTF_PROJECT__
#define __PRINTF_PROJECT__

/* Libraies to include*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct inputs - the inputs argumants to print
 *
 * @input: The operator
 * @f: The function associated
 */
typedef struct inputs
{
	char *input;
	int (*f)(va_list);
} inputs_t;

/*putchar function*/
int _putchar(char c);

/*printf functions prototypes*/
void print_char(va_list argument);
void print_string(va_list argument);
void print_percent(va_list argument);

/* the function to select */
void(*get_right_function(char *c))(va_list argument);

int _printf(const char *format, ...);

#endif /*__PRINTF_PROJECT__*/