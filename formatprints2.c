#include "main.h"

/**
*printhex - prints no.s in hexadecimal
*@argslist: arguments list
*Return: Void
*/

int printhex(va_list argslist)
{
int cnt = 0, cntcp = 0, base = 16, i = 0;
int *arr = NULL;
unsigned int num = 0, n = 0;

num = va_arg(argslist, unsigned int);
n = num;

	while (num != 0)
	{
		num = num / base;
		cnt++;
	}
	cntcp = cnt;

	arr = malloc(cntcp * sizeof(int));
	for (i = 0; i < cntcp; i++)
	{
		arr[i] = n % base;
		n /= base;
	}

	for (i = cntcp  - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			converthex(arr[i]);
		else
			_putchar(arr[i] + '0');
	}

	free(arr);
return (cntcp);
}


/**
*printHEX - prints no.s in hexadecimal
*@argslist: arguments list
*Return: Void
*/

int printHEX(va_list argslist)
{
int cnt = 0, cntcp = 0, base = 16, i = 0;
int *arr = NULL;
unsigned int num = 0, n = 0;

num = va_arg(argslist, unsigned int);
n = num;

	while (num != 0)
	{
		num = num / base;
		cnt++;
	}
	cntcp = cnt;

	arr = malloc(cntcp * sizeof(int));
	for (i = 0; i < cntcp; i++)
	{
		arr[i] = n % base;
		n /= base;
	}

	for (i = cntcp  - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			convertHEX(arr[i]);
		else
			_putchar(arr[i] + '0');
	}

	free(arr);
return (cntcp);
}

/**
*printoctal - prints numbers in Octal representation
*@argslist: arguments
*Return: Void
*/

int printoctal(va_list argslist)
{
int cnt = 0, cntcp = 0, base = 8, i = 0;
int *arr = NULL;
unsigned int num = 0, n = 0;

	num = va_arg(argslist, unsigned int);
	n = num;
	while (num != 0)
	{
		num = num / base;
		cnt++;
	}
	cntcp = cnt;

	arr = malloc(cntcp * sizeof(int));
	for (i = 0; i < cntcp; i++)
	{
		arr[i] = n % base;
		n /= base;
	}

	for (i = cntcp  - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}

	free(arr);
return (cntcp);
}

/**
*printbinary - prints number in binary
*@argslist: Argument containing number(in base 10)
*Return: number of digits printed
*/

int printbinary(va_list argslist)
{
int cnt = 0, cntcp = 0, base = 2, i = 0;
int *arr = NULL;
unsigned int num = 0, n = 0;

	num = va_arg(argslist, unsigned int);
	num = n;

	while (num != 0)
	{
		num = num / base;
		cnt++;
	}
	cntcp = cnt;

	arr = malloc(cntcp * sizeof(int));
	for (i = 0; i < cntcp; i++)
	{
		arr[i] = n % base;
		n /= base;
	}

	for (i = cntcp  - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}

	free(arr);
return (cntcp);
}
