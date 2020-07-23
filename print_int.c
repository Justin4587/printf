#include "holberton.h"
#include <unistd.h>

/**
* print_int - char count
* @s: string
* Return: int
*/

int print_int(va_list argpnt)
{
  int count = 0;
  int  i = va_arg(argpnt, int);

  if (i < 0)
    {
      i = -i;
      putchar('-');
      count++;
    }

  _putchar(i%10 +'0');
  count++;
  return (count);
}
