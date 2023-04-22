#include "variadic_functions.h"
#include <stdio.h>


void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    const char *format_ptr = format;
    char c;
    int i;
    float f;
    char *s;

    while (*format_ptr != '\0')
    {
        if (*format_ptr == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
        }
        else if (*format_ptr == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (*format_ptr == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
        }
        else if (*format_ptr == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }
        format_ptr++;
    }
    printf("\n");
    va_end(args);
}
