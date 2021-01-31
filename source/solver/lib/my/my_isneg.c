/*
** EPITECH PROJECT, 2019
** my_isneg.c
** File description:
** displays either N if the integer passed as parameter is negative
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    int N = 'N';
    int P = 'P';

    if (n >= 0) {
        my_putchar(P);
    }

    else
        my_putchar(N);

    return (0);
}
