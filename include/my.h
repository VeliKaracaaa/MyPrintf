/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char *str);
char *my_revstr(char *str);
void switch_case_2(char *format, int i, va_list list);
