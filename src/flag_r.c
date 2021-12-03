/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** flag r
*/

#include "../include/my.h"

void flag_r(char *folder)
{
    Liste_t *li = init_list(li);
    struct dirent  *lect;
    DIR* rep;
    struct stat sb;
    rep = opendir(folder);
    (rep == NULL) ? exit (0) : 0;
    while ((lect = readdir(rep)) != NULL) {
        if (lect->d_name[0] != '.') {
            li = push_front(li, lect->d_name);
        }
    }
    print_list(li);
    write(1, "\n", 1);
    closedir (rep);
}