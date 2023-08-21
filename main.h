#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/* MORE  FUNCTIONS FOR THE MAIN PROGRAM */
int print_character(char c);
int print_string(char *str);

#endif
