/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** error_handling
*/

#include "dante.h"
#include "define.h"

static int synthax_type(char const *type)
{
    if (!(_strcmp(type, "perfect") || _strcmp(type, "imperfect")))
        return (-1);
    return (_strcmp(type, "perfect")) ? (1) : (2);
}

static bool error_handling_solver(int ac, char const * const *av)
{
    return (2 != ac) ? (false) : (true);
}

static bool check_size(char const * const *av)
{
    if (!_strnum(av[1]) || !_strnum(av[2])) return (false);
    if (1 == _strlen((char *)av[1]))
        if ('0' == av[1][0]) return (false);
    if (1 == _strlen((char *)av[2]))
        if ('0' == av[2][0]) return (false);
    return (true);
}

int error_handling(int ac, char const * const *av)
{
    int type = 0;

    if (3 == ac && check_size(av)) return (2);
    if (!(4 == ac)) return (false);
    if (!(istrnum(av[1]) || istrnum(av[2]))) return (false);
    if (4 == ac) type = synthax_type(av[3]);
    if (-1 == type) return (false);
    return (type);
}