#include "main.h"

/**
*_printf - prints different format outputs
*@format: initial string argument
*@... : other arguments
*Return: No of Characters printed
*/

int _printf(const char *format, ...)
{
int count = 0;

va_list arguments;

va_start (arguments, format);

while (*format != '\0')
{
	if (*format == '%')
	{
		format++;
		if (*format == 'd')
			count += printdecimal(arguments);
		/*if (*format == 'X' || *format == 'x')
			count += printhex;
		if (*format == 's' || *format == 'S')
			count += printstring();
		if (*format == 'c')
			count += printchar;*/


	}
	else
	write(STDOUT_FILENO, format, 1);

	format++;
	count++;
}


return (count);
}


int main()
{

int r = _printf("me me   meee%d\n", 10);
_printf("%d\n", r);
return (0);
}
