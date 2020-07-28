#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* get_func - function
* description: find
* @n: int
* Return: void
*/

int (*get_func(char c))(va_list)
{
  int i = 0;

	print_t name[] = 
{
	  {'c', conv_c},
	  {'s', print_str},
		 
        
	  {'d', print_int},
	  {'i', print_int},
		 
	  /**
	   *  {"r", rev_string}
		 *	{"u", print_unsignd},
		 *	{"o", print_octal},
		 *	{"x", print_hex},
		 *	{"X", print_Hex},
		 */
		{'\0', NULL}
};

	while (name[i].c != '\0')
	  {
	    if (name[i].c == c)
	      return (name[i].f);
	    i++;
	  }


	return (name[i].f);
}
