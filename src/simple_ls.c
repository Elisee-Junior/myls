/*
** EPITECH PROJECT, 2021
** my_ls 
** File description:
** simple ls
*/

#include "../include/my.h"

void my_ls(char *folder)
{
    struct dirent *lect;
    DIR *rep;
    rep = opendir(folder);
    (rep == NULL) ? exit (0) : 0;
    while ((lect = readdir(rep)) != NULL) {
        if (lect->d_name[0] != '.') {
            my_putstr(lect->d_name);
            my_putstr (" ");
        }
    }
    write(1, "\n", 1);
    closedir(rep);
}
