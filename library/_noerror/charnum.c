/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** charnum
*/

#include "noerror.h"

bool _charnum(const char character)
{
    return ('0' <= character && '9' >= character) ? (true) : (false);
}