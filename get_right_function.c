#include "main.h"
/**
 * get_right_function - selects the correct function to perform
 * the specific print asked by the user
 * @c: indicate the variable to print
 *
 * Return: specific function work
 */
void (*get_right_function(char *c))(va_list argument)
{
    inputs_t inputs[] = {
        {"c", _ikteb_7arf},
        {"s", _ikteb_jomla},
        {"%", print_percent},
        {NULL, NULL}};
    int i = 0;

    while (inputs[i].input)
    {
        if (*c == inputs[i].input[0])
        {
            return (inputs[i].f);
        }
        i++;
    }
    return (NULL);
}
