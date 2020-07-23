#include <unistd.h>

/**
* _strlen - char count
* @s: string
* Return: sl
*/

int _strlen(char *s)
{
  int sl;

  while (*(sl + s))
    sl++;
  return(sl);
}

