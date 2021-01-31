/*
** EPITECH PROJECT, 2020
** dante_2019 [WSL: Debian]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct vector2i_s
{
    int x, y;
} vector2i_t;

typedef struct wall_s
{
    int top, left;
} wall_t;

typedef struct dante_s
{
    char **maze;
    vector2i_t size;
    wall_t wall;
    bool rand;
} dante_t;

typedef struct check_s
{
    int w, s;
} check_t;

typedef struct root_s
{
    char **tab;
    vector2i_t size;
} root_t;

#endif /* !STRUCT_H_ */