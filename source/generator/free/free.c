/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** free
*/

#include "dante.h"
#include "define.h"

bool _free(dante_t *dante, char const *const * av)
{
    for (int i = 0; SIZE_MALLOC1 != i; i++) free(MAZE[i]);
    free(MAZE);
}