/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** process
*/

#include "dante.h"
#include "define.h"

static void set_imperfect(dante_t *dante)
{
    vector2i_t vector = {0, 0};

    for (int i = 0; ((SIZE.y * SIZE.x) / 2) > i; i++) {
        vector = (vector2i_t){rand() % SIZE.x, rand() % SIZE.y};
        if (MAZE[vector.y][vector.x] == '1')
            MAZE[vector.y][vector.x] = '0';
    }
}

bool process_generator(dante_t *dante, int type)
{
    for (int y = 0; ((SIZE.y * 2) - 1) > y; y += 2) {
        WALL = (wall_t){0, 0};
        for (int x = 0; ((SIZE.x * 2) - 1) > x; x += 2) {
            RAND = rand() % 2;
            if (0 == y) MAZE[y][x] = '0';
            if (0 <= LTOP && MAZE[LTOP][x] == '1') WALL.top = 1;
            if (0 <= LLEFT && MAZE[y][LLEFT] == '1') WALL.left = 1;
            if (0 <= LTOP && TEST_TOP) MAZE[LTOP][x] = '0';
            if (0 <= LLEFT && TEST_LEFT) MAZE[y][LLEFT] = '0';
            if (WALL.top == 1 && WALL.left == 1) {
                MAZE[LTOP][x] = (0 <= LTOP && RAND) ? '0' : '1';
                MAZE[y][LLEFT] = (0 <= LLEFT && !RAND) ? '0' : '1';
            }
        }
    }
    if (2 == type) set_imperfect(dante);
    MAZE[SIZE.y - 1][SIZE.x - 1] = '0';
    MAZE[SIZE.y - 2][SIZE.x - 1] = '0';
    return (true);
}