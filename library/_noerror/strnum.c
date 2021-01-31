/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** strnum
*/

#include "noerror.h"

bool _strnum(const char *restrict string)
{
    for (int i = 0; string[i]; i++)
        if (!_charnum(string[i])) return (false);
    return (true);
}