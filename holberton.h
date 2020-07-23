#ifndef _PRINTF
#define _PRINTF

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int (*get_func(char c))(va_list);
int conv_c(va_list);
int print_str(va_list);
int _putchar(char c);
int _strlen(char *s);
int print_int(va_list);


typedef struct spec
{
  char c;
  int (*f)(va_list(argpnt));
}print_t;



#endif /* _PRINTF_ */
