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

va_start(arguments, format);

while (*format != '\0')
{
	++count;
	if (*format == '%')
	{
		format++;
		if (*format == 'd' || *format == 'i')
			count += printdecimal(arguments);
		if (*format == 'X')
			count += printHEX(arguments);
		if (*format == 'x')
			count += printhex(arguments);
		if (*format == 's' || *format == 'S')
			count += printstring(arguments);
		if (*format == 'c')
			count += printchar(arguments);
		if (*format == 'o' || *format == 'O')
			count += printoctal(arguments);
		if (*format == 'u')
			count += printunsigned(arguments);
		if (*format == '%')
		{
			count++;
			write(1, "%", 1);
		}
	}
	else
	write(STDOUT_FILENO, format, 1);

	format++;
}

va_end(arguments);
return (count);
}
