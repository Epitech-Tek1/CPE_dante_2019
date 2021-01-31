/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int size = 0;
    int start = 0;
    int c;
    int  end;

    for (size; str[size] != '\0'; ++size)
        my_putchar(size);
    end = size - 1;
    while (start != size / 2) {
        c = str[start];
        str[start] = str[end];
        str[end] = c;
        ++start;
        --end;
    }
    return (str);
}
