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
	total++;
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
	if(f == NULL)
	  {
	    _putchar('%');
	    _putchar(c);
	    total++;
	    if(c != '\0')
	      {
		i++;
		total++;
	      }
	    continue;
	   	  }
	   total = total + f(argpnt);
	  }

      }
       i++;
  }
  va_end (argpnt);

return(total);
}
