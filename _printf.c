#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* _printf - function
* description: print
* @format: str
* Return: int
*/

int _printf(const char *format, ...)
{
va_list argpnt;
int i = 0;
int total = 0;
char c;
int (*f)(va_list);

va_start(argpnt, format);


  while (format[i])
  {
    if (format[i] != '%')
      {
	c = format[i];
	_putchar(c);
      }
    else
      {
	i++;
	c = format[i];

	if (c == '%')
	  {
	    _putchar('%');
     	  }
	else
	  {
	f = get_func(format[i]);
	total = total + f(argpnt);
	  }
      }
   total++;
    i++;
  }
  va_end (argpnt);
  total--;
return(total);
}
