/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** check.c
*/

#include "my.h"

int check_fp(char f, char *f_tab)
{
    for (int i = 0; f_tab[i]; i++)
        if (f == f_tab[i])
            return (1);
    return (0);
}

int check_pn(const char *format, int i)
{
    if (check_fp(format[i], "#") && check_fp(format[i + 1], "scdiouxXpbSn%"))
        return (1);
    else if (check_fp(format[i], "0") &&
        check_fp(format[i + 1], "scdiu%"))
        return (1);
    if (check_fp(format[i], "0123456789") && my_getnbr(format + (i)) != 0) {
        for (; '0' <= format[i] && format[i] <= '9'; i += 1);
        if (check_fp(format[i], "scdiu%"))
            return (1);
    }
    return (0);
}