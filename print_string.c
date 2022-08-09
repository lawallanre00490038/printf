#include "main.h"

/**
* print_string - Entry point
* @string: the argument
* Return: Always 0
*/


int print_string(char *string)
{
int count = 0;
for (int i = 0; string[i] != '\0'; i++)
{
count += _putchar(string[i]);
}
return (count);
}
