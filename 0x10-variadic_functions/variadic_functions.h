#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @b: type for print
 * @a: print function
 */
typedef struct print
{
	char *b;
	void (*a)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
