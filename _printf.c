#include "main.h"
void print_buffer(char buffer[],int *buff_ind);
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 * */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if(format[i] != '%')
		{
			lyle_putchar(format[i]);
		}	
		if (format [i]  == '&' && format[i + 1] == 'c')
		{
			lyle_putchar(va_arg(args, int));
			i++;
		}	
		count+= 1;
	}	

	va_end(args);
	return (count);
}
