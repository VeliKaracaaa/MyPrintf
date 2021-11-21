/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** task 03
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int i = 0;
    int tmp = 0;

    while (i < len) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}
