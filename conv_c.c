#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* conv_c - function
* description: putchar
* @c: char
* Return: void
*/



int conv_c(va_list argpnt)
{
  char c;
  c = va_arg(argpnt, int);
  _putchar(c);
  return (1);

}
