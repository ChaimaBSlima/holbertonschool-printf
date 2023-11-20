#include "main.h"
/**
 * get_right_function - selects the correct function to perform
 * the specific print asked by the user
 * @c: indicate the variable to print
 *
 * Return: specific function work
 */
int (*get_right_function(char *c))(va_list)
{
	inputs_t inputs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (c && c[0] == inputs[i].input[0] && !c[1])
		{
			return (inputs[i].f);
		}
		i++;
	}
	return (NULL);
}
