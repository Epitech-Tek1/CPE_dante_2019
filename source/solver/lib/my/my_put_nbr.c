/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** nbr
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int my_put_nbr(char *base, int nb)
{
    int leng = my_strlen(base);
    int begin;
    int end;

    if  (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    }
    end = nb % leng;
    begin = nb / leng;
    if (begin != 0)
        my_put_nbr(base, begin);
    my_putchar(base[nb % leng]);
    return (0);
}
