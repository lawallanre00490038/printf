#include <stdarg.h>
#include "main.h"

/**
* _printf - Entry point
* 
* @format: the argument
*
* Return: Always 0
*/

int _printf(const char *format, ...)
{
int count = 0;
int i;

va_list data;
va_start(data, format);

for (i = 0; format[i] != '\0';)
{
if (format[i] != '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i] == '%' && format[i+1] != ' ')
{
switch (format[i + 1])
{
case 'c':
/*print the character from the va_arguments*/
count += _putchar(va_arg(data, int));
break;

case 's':
count += print_string(va_arg(data, char *));
break;

/*print the character from the va_arguments*/
case '%':
count += _putchar('%');
break;

case 'd':
count += print_decimal(va_arg(data, int));
break;

case 'i':
count += print_decimal(va_arg(data, int));
break;


default:
break;
}
i += 2;
}

}

return (count);
}
