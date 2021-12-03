/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** total
*/

#include "../include/my.h"

void total(char *folder)
{
    int i = 0, j = 0;
    struct dirent *lect;
    struct stat sb;
    DIR *rep;
    char *str = NULL, *test = NULL;
    rep = (folder == NULL) ? opendir(".") : opendir(folder);
    while ((lect = readdir(rep)) != NULL) {
        test = my_strdup(folder);
        str = my_strcat(my_strcat(test, "/"), lect->d_name);
        if (lect->d_name[0] != '.')
            (stat(str, &sb) != -1) ? i += sb.st_blocks : 0;
        str[0] = '\0';
    }
    i = i / 2;
    my_putstr("total ");
    my_put_nbr(i);
    my_putchar('\n');
}
