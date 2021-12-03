/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** date
*/

#include "../include/my.h"

void date (struct passwd *pwd, struct group *grp, struct stat sb)
{
    char *str;
    int i;
    pwd = getpwuid (sb.st_uid);
    grp = getgrgid (sb.st_uid);
    str = ctime(&sb.st_mtime);
    my_put_nbr ((int)sb.st_nlink);
    my_putchar (' ');
    my_putstr (pwd->pw_name);
    my_putchar (' ');
    my_putstr (grp->gr_name);
    my_putchar (' ');
    my_put_nbr ((int) sb.st_size);
    my_putchar (' ');
    for (i = 4; i < 16; i++)
        my_putchar (str[i]);
    my_putchar (' ');
}