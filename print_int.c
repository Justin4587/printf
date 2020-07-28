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
  if (i == 0)
    {
      _putchar('0');
      return(1);
    }

  if (i < 0)
    {
      i = -i;
      _putchar('-');
      count++;
    }

  count = count + int_rec(i);
  return (count);
}

    int int_rec(int num)
{
  int digit;
  int len;

  if(num == 0)
	     {
	       return (0);
	     }
  digit = num % 10;
  len = 1 + int_rec(num / 10);
  _putchar(digit + '0');
    return (len);
 }
