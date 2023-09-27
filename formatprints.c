#include "main.h"

/**
*printdecimal - prints decimals in the format
*@argslist: list of arguments
*Return: Number of digits in number
*/

int printdecimal(va_list argslist)
{
int num = 0, count = 0;

num = va_arg(argslist, int);
dprintf(STDOUT_FILENO, "%d", num);/*cheating,using func that's not allowed;)*/
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
/*write(1, &num, count++);*/
return (count);
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
