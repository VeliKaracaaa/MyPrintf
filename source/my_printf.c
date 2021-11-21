/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "my.h"

int hexadecimal(int nb, char x)
{
    int i = 0;
    int tmp = 0;
    int tmp_2 = nb;

    while (tmp_2 != 0) {
        tmp_2 = tmp_2 / 16;
        i++;
    }
    char *result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    while (nb != 0) {
        tmp = nb % 16;
        if (tmp > 9)
            result[i - 1] = (x == 'x') ? tmp + 87 : tmp + 55;
        else
            result[i - 1] = tmp + 48;
        nb = nb / 16;
        i--;
    }
    my_putstr(result);
    return (0);
}

int binary(int nb)
{
    int i = 0;
    int tmp = 0;
    int tmp_2 = nb;

    while (tmp_2 != 0) {
        tmp_2 = tmp_2 / 2;
        i++;
    }
    char *result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    while (nb != 0) {
        tmp = nb % 2;
        nb = nb / 2;
        result[i - 1] = tmp + 48;
        i--;
    }
    my_putstr(result);
    return (0);
}

int octale(int nb)
{
    int i = 0;
    int tmp = 0;
    int tmp_2 = nb;

    while (tmp_2 != 0) {
        tmp_2 = tmp_2 / 8;
        i++;
    }
    char *result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    while (nb != 0) {
        tmp = nb % 8;
        nb = nb / 8;
        result[i - 1] = tmp + 48;
        i--;
    }
    my_putstr(result);
    return (0);
}

void switch_case(char *format, int i, va_list list)
{
    switch (format[i + 1]) {
    case 'c':
        my_putchar(va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    default:
        switch_case_2(format, i, list);
	return;
    }
}

void switch_case_2(char *format, int i, va_list list)
{
    switch (format[i + 1]) {
        case 'b':
            binary(va_arg(list, int));
            break;
        case 'x': case 'X':
            hexadecimal(va_arg(list, int), format[i + 1]);
            break;
        case 'o':
            octale(va_arg(list, int));
	        break;
    }
}

void my_printf(char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);

    while (format[i] != '\0') {
        if (format[i] == '%' && format[i + 1] == '%') {
            my_putchar(format[i]);
            i++;
        } else if (format[i] == '%') {
            switch_case(format, i, list);
            i++;
        }
        else
            my_putchar(format[i]);
        i++;
        va_end(list);
    }
}