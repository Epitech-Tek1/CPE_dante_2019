/*
** EPITECH PROJECT, 2019
** my_put_unbr
** File description:
** unsigned integer
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int my_put_unbr(char *base, unsigned int nb)
{
    unsigned int leng = my_strlen(base);
    unsigned int begin;
    unsigned int end;

    end = nb % leng;
    begin = nb / leng;
    if (begin != 0)
        my_put_unbr(base, begin);
    my_putchar(base[nb % leng]);
    return (0);
}
