#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void _putchar(int);
int pwr(int num, int exp);
void converthex(int n);
void convertHEX(int n);

int _printf(const char *format, ...);
int printdecimal(va_list argslist);
int printchar(va_list argslist);
int printstring(va_list argslist);
int printhex(va_list argslist);
int printHEX(va_list argslist);
int printoctal(va_list argslist);
int printunsgned(va_list argslist);


#endif
