/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** main fuction
*/

#include "../include/my.h"

void basic_comb(int ac, char **av)
{
    int i = ac > 1 ? 1 : 0;
    (my_strcmp(av[i], "-l") == 0) ? ((av[i + 1] == NULL) ?
    flag_l(".") : flag_l(av[i + 1])) : (my_strcmp(av[i], "-d") == 0) ?
    ((av[i + 1] == NULL) ? flag_d(".") : flag_d(av[i + 1])) :
    (my_strcmp(av[i], "-R") == 0) ? ((av[i + 1] == NULL) ? flag_R(".") :
    flag_R(av[i + 1])) : (my_strcmp(av[i], "-r") == 0) ? ((av[i + 1] == NULL) ?
    flag_r(".") : flag_r(av[i + 1])) :(my_strcmp(av[i], "-t") == 0) ?
    ((av[i + 1] == NULL) ? flag_t(".") : flag_t(av[i + 1])) : (ac == 1) ?
    my_ls(".") : (ac == 2 && my_strcmp(av[1], "-r") != 0 &&
    my_strcmp(av[1], "-R") != 0 && my_strcmp(av[1], "-d") != 0 &&
    my_strcmp(av[1], "-l ") != 0 && my_strcmp(av[1], "-a") != 0) ?
    my_ls(av[1]) : (my_strcmp(av[i], "-a") == 0) ? ((av[i + 1] == NULL) ?
    flag_a(".") : flag_a(av[i + 1])) : 0;
}

int main(int ac, char **av)
{
    basic_comb(ac, av);
    return (0);
}