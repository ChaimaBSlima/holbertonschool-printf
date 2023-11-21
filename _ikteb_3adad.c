#include "main.h"
/**
 * _ikteb_3adad - Print number
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _ikteb_3adad(va_list argument)
{

	int el3adad = va_arg(argument, int);
	int num; 
    int ra9m_ela7ad = el3adad % 10;
    int digit;
	int  i = 1;
	int checker = 1;

	el3adad = el3adad / 10;
	num = el3adad;

	if (ra9m_ela7ad < 0)
	{
		_putchar('-');
		el3adad = -el3adad;
		ra9m_ela7ad = -ra9m_ela7ad;
        num = -num;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			checker = checker * 10;
			num = num / 10;
		}
		num = el3adad;
		while (checker > 0)
		{
			digit = num / checker;
			_putchar(digit + '0');
			num = num - (digit * checker);
			checker = checker / 10;
			i++;
		}
	}
	_putchar(ra9m_ela7ad + '0');

	return (i);
}
