/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** mgnbr
*/

#include "my.h"
#include <unistd.h>

int nbr_detect(int i, char const *str)
{
    int c = 0;

    while ((str[i] < 48 || str[i] > 57) && str[i] != '\0') {
        if (str[i] == '-') {
            c--;
        }
        i++;
        c++;
    }
    if (str[i] == '\0'){
        return (-1);
    }
    return i;
}

int my_getnbr(char const *str, int start)
{
    int j = nbr_detect(start, str);
    int i = j;
    int neg = 0;
    int nb = 0;

    if (i == -1) {
        write(2, "no numbers found\n", 20);
        return (84);
    }
    while (str[j - 1] == '-') {
        ++neg;
        --j;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        nb = (nb * 10) + (str[i] - 48);
        ++i;
    }
    if (neg % 2 != 0)
        nb *= -1;
    return (nb);
}
