/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** p
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void deci(va_list ap)
{
    my_put_nbr("0123456789", va_arg(ap, int));
}

void string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void charact(va_list ap)
{
    putchar(va_arg(ap, int));
}

void flags(va_list ap, char value)
{
    int j = 0;
    char flag[11] = "dsciouxXbpS";
    void (*ptf[11])(va_list) = {&deci, &string, &charact, &integer,
                                &octal, &udeci, &hexa_down, &hexa_up,
                                &ubinary, &pointer, &string_octal};

    for (j = 0; flag[j] != '\0'; j++){
        if (flag[j] == value)
            (*ptf[j])(ap);
    }
}

int my_printf(char *arg1, ...)
{
    va_list ap;

    va_start(ap, arg1);
    for (int i = 0; arg1[i] != '\0'; ++i) {
        while (arg1[i] == '%') {
            flags(ap, arg1[i + 1]);
            i += 2;
        }
        my_putchar(arg1[i]);
    }
    va_end(ap);
}