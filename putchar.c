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
*Return: num raised to power exp
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

/**
*converthex - converts numbers from 10-15 to a-f
*@n: number to be changed
*Return: void
*/

void converthex(int n)
{
if (n == 10)
	_putchar('a');
else if (n == 11)
	_putchar('b');
else if (n == 12)
	_putchar('c');
else if (n == 13)
	_putchar('d');
else if (n == 14)
	_putchar('e');
else if (n == 15)
	_putchar('f');
}

/**
*convertHEX - converts numbers from 10-15 to A-F
*@n: number to be changed
*Return: void
*/

void convertHEX(int n)
{
if (n == 10)
	_putchar('A');
else if (n == 11)
	_putchar('B');
else if (n == 12)
	_putchar('C');
else if (n == 13)
	_putchar('D');
else if (n == 14)
	_putchar('E');
else if (n == 15)
	_putchar('F');
}
