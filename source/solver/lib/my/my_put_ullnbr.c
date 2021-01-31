/*
** EPITECH PROJECT, 2019
** my_put_ullnbr
** File description:
** unsigned long long integer
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int my_put_ullnbr(char *base, unsigned long long int nb)
{
    unsigned long long int leng = my_strlen(base);
    unsigned long long int begin;
    unsigned long long int end;

    end = nb % leng;
    begin = nb / leng;
    if (begin != 0)
        my_put_ullnbr(base, begin);
    my_putchar(base[nb % leng]);
    return (0);
}
