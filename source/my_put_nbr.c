/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task 04
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int i = 0;
    unsigned int tmp = nb;
    unsigned int u_nb = nb;
    char *result = 0;

    if (nb < 0) {
        my_putchar('-');
        u_nb = nb * (-1);
        tmp = u_nb;
    }
    for (; tmp > 0; i++)
        tmp = tmp / 10;
    result = malloc(i + 1);
    for (int j = i - 1; j >= 0; j--) {
        result[j] = u_nb % 10 + 48;
        u_nb = u_nb / 10;
    }
    result[i] = '\0';
    my_putstr(result);
    free(result);
    return (0);
}
