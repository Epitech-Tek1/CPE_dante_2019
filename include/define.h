/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** define
*/

#ifndef DEFINE_H_
#define DEFINE_H_

#define EXIT_ERROR 84

typedef char * string;
typedef char ** array;

#define SURFACE ((_atoi(av[2]) * 2) - 1)

#define SIZE_MALLOC1 SURFACE
#define SIZE_MALLOC2 ((_atoi(av[1]) * 2) - 1)

#define IS_WAY (y == SIZE.y - 1 && x == SIZE.x - 1 && MAZE[y][x] == '1')

#define HEIGHT (SIZE.y * 2) - 1
#define WIDTH (SIZE.x * 2) - 1
#define BREAK_RAND_X (rand() % (SIZE.x * 2))
#define BREAK_RAND_Y (rand() % (SIZE.y * 2))

#define Y root->size.y
#define X root->size.x
#define TAB root->tab
#define I i
#define J j

#define LINE_1 ((x % 2) == 0 && (y % 2) == 0)
#define LINE_2 (!(x % 2) != 0 && (y % 2) == 0)

#define LTOP y - 1
#define LLEFT x - 1

#define MAZE dante->maze
#define WALL dante->wall
#define RAND dante->rand
#define SIZE dante->size

#define TEST_TOP (WALL.top == 1 && WALL.left == 0)
#define TEST_LEFT (WALL.top == 0 && WALL.left == 1)

typedef enum {LEFT = 0, TOP = 1, RIGHT = 2, BOTTOM = 3} bit_pos_t;

#endif /* !DEFINE_H_ */