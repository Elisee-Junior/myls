/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** flag_l
*/

#include "../include/my.h"

void flag_l(char *folder)
{
    struct dirent *lect;
    DIR* rep = opendir(folder);
    (rep == NULL) ? exit (0) : 0;
    char *str = NULL,  *test = malloc(sizeof(char) * my_strlen(folder));
    struct stat sb;
    struct passwd *psw;
    struct group *grp;
    total (folder);
    while ((lect = readdir(rep)) != NULL) {
        test = folder;
        str = my_strcat(my_strcat(test, "/"), lect->d_name);
        if (lect->d_name[0] != '.') {
            (stat(str, &sb) == -1) ? exit(84) : 0;
            types(sb);
            rights (sb);
            date (psw, grp, sb);
            my_putstr(lect->d_name);
            my_putchar ('\n');
        }
    } closedir(rep);
}