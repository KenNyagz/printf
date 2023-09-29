#include "main.h"

/**
*printdecimal - prints decimals in the format
*@argslist: list of arguments
*Return: Number of digits in number
*/

int printdecimal(va_list argslist)
{
int num = 0, cnt = 0, cntcp = 0, base = 10, i = 0, n = 0;
int *arr = NULL;

	num = va_arg(argslist, int);
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}
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
*printchar - prints characters in the formated string
*@argslist: pointer to variable arguments
*Return: no of chars printed
*/

int printchar(va_list argslist)
{
int fmtchar;

fmtchar = va_arg(argslist, int);
write(STDOUT_FILENO, &fmtchar, 1);

return (1);
}

/**
*printstring - prints string in the formated text
*@argslist: variable arguments
*Return: number of chars printed
*/

int printstring(va_list argslist)
{
int count = 0;
char *str = NULL;

str = va_arg(argslist, char *);
if (str == NULL)
	str = "(null)";

while (*str != '\0')
{
	write(STDOUT_FILENO, str, 1);
	++count;
	str++;
}
++count;

return (count);
}

/**
*printunsgned - prints decimals in the format
*@argslist: list of arguments
*Return: Number of digits in number
*/

int printunsgned(va_list argslist)
{
	int cnt = 0, cntcp = 0, base = 10, i = 0;
	int *arr = NULL;
	unsigned int num = 0, n = 0;

	num = va_arg(argslist, unsigned int);
	if (num <= 0)
	{
		if (num == 0)
		{
			_putchar(48);
			cnt++;
			return (cnt);
		}
		num = -num;
	}
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
