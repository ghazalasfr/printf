#include "main.h"

/**
  * _printf - Print like a printf
  * @format: Args to the function
  *
  * Return: A format string to output
  */


int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				count += print_character(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += print_string(str);
			}
			else if (*format == '%')
			{
				count += print_character('%');
			}
		}
		else
		{
			count += print_character(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
