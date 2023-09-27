#include "main.h"

/**
*printdecimal - prints decimals in the format
*@argslist: list of arguments
*Return: Number of digits in number
*/

int printdecimal(va_list argslist)
{
int num = 0, count = 0;

num = va_arg(list, int);
dprintf(STDOUT_FILENO, "%d", num);/*cheating,using funct that's not allowed;)*/
	while (num != 0)
	{
		num = num / 10;
		count++;
	}

return (count);
}
