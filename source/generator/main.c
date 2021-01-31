/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "dante.h"
#include "define.h"

static bool _dante(int ac, char const * const *av)
{
    dante_t dante;
    int process = 0;

    process = error_handling(ac, av);
    if (!process) return (false);
    if (!init(&dante, ac, av)) return (false);
    if (!process_generator(&dante, process)) return (false);
    display(&dante);
    _free(&dante, av);
    return (true);
}

int main(int ac, char const * const *av)
{
    return (!_dante(ac, av)) ? (EXIT_ERROR) : (EXIT_SUCCESS);
}