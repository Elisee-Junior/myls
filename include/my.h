/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
#endif

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>

#define types(sb) ((S_ISDIR ((sb).st_mode)) ? my_putstr("d") : \
(S_ISCHR ((sb).st_mode)) ? my_putstr("c") : (S_ISBLK((sb).st_mode)) ? \
my_putstr("b") : (S_ISLNK ((sb).st_mode)) ? my_putstr ("l") : \
(S_ISSOCK((sb).st_mode)) ? my_putstr ("s") : my_putchar ('-'))

typedef struct node
{
    char *value;
    struct node *next;
    struct node *prev;
}node_t;

typedef struct Liste
{
    int length;
    struct node *begin;
    struct node *end;
}Liste_t;

int my_strlen(char *str);
void my_swap(int j, int k, char **src, char **dest);
void my_ls(char *folder);
char *my_strdup(char *src);
void flag_a(char *folder);
int my_put_nbr(int nb);
void my_putchar(char c);
void flag_d(char *folder);
void rights (struct stat sb);
char *my_strcpy(char *dest, char const *src);
void flag_r(char *folder);
int my_strcmp(char *s1, char *s2);
void my_putstr(char *str);
void print_list(Liste_t *li);
void date (struct passwd *pwd, struct group *grp, struct stat sb);
char *my_strcat(char *dest, char *src);
int empty_or_filled(Liste_t *li);
void check_allocated(Liste_t *li);
void check_allocated_node(node_t *li);
void total(char *folder);
Liste_t *init_list(Liste_t *list);
void flag_l(char *folder);
Liste_t *push_back(Liste_t *li, char *i);
void flag_t(char *folder);
void flag_R(char *folder);
Liste_t *push_front(Liste_t *li, char *i);
void swap(char **tab, char *folder, struct stat sb);
