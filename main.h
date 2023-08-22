#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/* HELPER FUNCTIONS */
int print_char(char c);
int print_string(char *str);
int handle_s(va_list args);
int handle_c(va_list args);

#endif
