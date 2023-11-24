#include "main.h"
/**
 * _ikteb_3adad - Print number
 * @argument: the number
 *
 * Return: n (bytes)
 */
int _ikteb_3adad(va_list argument)
{
	/* Store the int data in the el3adad variable*/
	int el3adad = va_arg(argument, int);
	/* A variable to store the number and makes some changes on it
	* ( I don't want to lose the data stored in 'el3adad' because of the changes)
	* that's why I created the new variable 'num' */
	int num;
	/* A variable to store the last digit */
	int ra9m_ela7ad = el3adad % 10;
	/* A variable to store the digit to print*/
	int digit;
	/* storing the bytes of the int value */
	int i = 1;
	/* the checker store the lenght of the digit */
	int checker = 1;
    /* We divide the number by ten to start the process */
	/* this operation elimnate the last digit from the iteration to avoid Errors */
	el3adad = el3adad / 10;
	/*storing the new number in the variable int */
	num = el3adad;
    
	/* in case of the last digit is negative means the number is negative  */
	if (ra9m_ela7ad < 0)
	{
		/* printing the '-' symbol to declare that we are working with a negative number*/
		_putchar('-');
		/* the number takes his abs value*/
		el3adad = -el3adad;
		/* the last digit takes his abs value */
		ra9m_ela7ad = -ra9m_ela7ad;
		/* the stored number takes his abs value*/
		num = -num;
		/* the bytes incremented by one (bytes of '-')*/
		i++;
	}
	/* In case of the number is positive */
	/* If it is negative, it becames positive thanks to the first condition */
	if (num > 0)
	{
		/* iterate the number based on his number of digit while dividing it by ten */
		while (num / 10 != 0)
		{
			/* the checker store the lenght of the digit */
			/* if the number is 1024 the checker is 1000 */
			checker = checker * 10;
			/* the iteration process */
			num = num / 10;
		}
		/* Num (after the iteration) have now the last digit */
		/* Store the number again in the num variable  */
		num = el3adad;
		/* iterate the number based on his length stored in the checker variable*/
		while (checker > 0)
		{
			/* dividing the num by the checker to obtain the digit to print*/
			digit = num / checker;
			/* printing the digit by adding its value to the ACII value of '0' */
			_putchar(digit + '0');
			/*  subtracting the digit from the original number */
			num = num - (digit * checker);
			/* dividing the checker for the iteration*/
			checker = checker / 10;
			/* storing the bytes bazed on the checker */
			/* the checker is 1000 so the bytes are 4 */
			i++;
		}
	}
	/* printing the last dight that we have stored in the begging */
	/* the last digit is out of the iteration */
	/* printing by adding its value to the code ASCII of 0 */
	_putchar(ra9m_ela7ad + '0');
	/* returning the bytes stored in the variable i */
	return (i);
}
