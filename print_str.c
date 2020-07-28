#include "holberton.h"
#include <unistd.h>

/**
* print_str - char count
* @s: string
* Return: int
*/

int print_str(va_list argpnt)
{
  int sl = 0;
  char *str = va_arg(argpnt, char *);


  while (str[sl])
    {
    _putchar(str[sl]);
    sl++;
    }
  return(sl);
}

