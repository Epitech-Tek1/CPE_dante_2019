/*
** EPITECH PROJECT, 2019
** my_putstr_octal
** File description:
** display a string with octal base
*/

#include "my.h"

int my_put_char(char *base, char nb)
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

int zero(int nb)
{
    int result = 1;

    if (nb < 0)
        nb * -1;
    for (;nb >= 10; ++result)
        nb /= 10;
    if (result < 1){
        my_putchar(0);
        my_putchar(0);
        my_putchar(0);
        }
    else if (result < 10) {
        my_putchar (0);
        my_putchar(0);
    }
    else
        my_putchar(0);
    return (0);
}

int my_putstr_octal(char const *str)
{
    for ( int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            zero(str[i]);
            my_put_char("01234567", str[i]);
        }
        my_putchar(str[i]);
    }
    return (0);
}
