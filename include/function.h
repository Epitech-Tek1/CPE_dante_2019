/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

static inline bool
isnum(char const string)
{
    if ('0' > string || '9' < string) return (false);
    return (true);
}

static inline bool
istrnum(char const *string)
{
    for (int i = 0; string[i]; i++)
        if (!isnum(string[i])) return (false);
    return (true);
}

int
error_handling(int ac, char const * const *av);

bool
init(dante_t *dante, int ac, char const * const *av);

bool
process_generator(dante_t *dante, int type);

bool
process_solver(dante_t *dante, int type);

void
display(dante_t *dante);

bool
_free(dante_t *dante, char const *const * av);


int
map(int ac, char **av, root_t *root);

int
check_map(root_t *root);

int
check_around_star(root_t *root, int i, int j);

int
change_star(root_t *root);

int
remove_y(root_t *root);

check_t *check_up(char up, check_t *check);

check_t *check_down(char down, check_t *check);

check_t *check_right(char right, check_t *check);

check_t *check_left(char left, check_t *check);

check_t *check_around(root_t *root, check_t *check, int i, int j);

#endif /* !FUNCTION_H_ */