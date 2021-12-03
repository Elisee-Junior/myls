/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** flag_R
*/

#include "../include/my.h"

void cond(char *str)
{
    if (opendir(str) != NULL) {
        my_putstr("\n./");
        my_putstr(str);
        my_putstr("\n");
        my_ls(str);
    }
}

void flag_R(char *folder)
{
    struct dirent *lect;
    DIR *rep;
    rep = opendir(folder);
    (rep == NULL) ? exit (0) : 0;
    my_putstr(folder);
    my_putstr(":\n");
    my_ls(folder);
    while ((lect = readdir(rep)) != NULL) {
        if (lect->d_name[0] != '.') {
            cond(lect->d_name);
        }
    }
    closedir(rep);
}
