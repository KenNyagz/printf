#include "main.h"

/**
*_putchar - writes a character to standard input
*@c: the char to be printed out
*Return: Void
*/

void _putchar(int c)
{

write(1, &c, 1);

}

/**
*pwr - raise a number to an exponent
*@num: the base number
*@exp: the exponent/power
*Return: number raised to power exp
*/


int pwr(int num, int exp)
{
int i, n = num;

	for (i = 1; i < exp; i++)
	{
		n *= num;
	}
return (n);
}
