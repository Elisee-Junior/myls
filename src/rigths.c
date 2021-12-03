/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** rigths
*/

#include "../include/my.h"

void rights (struct stat sb)
{
    my_putstr((sb.st_mode & S_IRUSR) ? "r" : "-");
    my_putstr((sb.st_mode & S_IWUSR) ? "w" : "-");
    my_putstr((sb.st_mode & S_IXUSR) ? "x" : "-");
    my_putstr((sb.st_mode & S_IRGRP) ? "r" : "-");
    my_putstr((sb.st_mode & S_IWGRP) ? "w" : "-");
    my_putstr((sb.st_mode & S_IXGRP) ? "x" : "-");
    my_putstr((sb.st_mode & S_IROTH) ? "r" : "-");
    my_putstr((sb.st_mode & S_IWOTH) ? "w" : "-");
    my_putstr((sb.st_mode & S_IXOTH) ? "x" : "-");
    my_putstr(!(sb.st_mode & S_IXOTH) && (sb.st_mode & S_ISVTX) ? "t" : "-");
    my_putstr (".");
    my_putstr (" ");
}