/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** copies n characters from a string to another
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        my_putchar(src[i]);
        i = i + 1;
    }
    return (dest);
}
