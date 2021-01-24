/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** flags.c
*/

#include "my.h"
#include "printf.h"

void pf_str_p(int size, va_list list)
{
    char *str = va_arg(list, char *);

    if (size > my_strlen(str))
        for (int j = 0; j < (size - my_strlen(str)); j++)
            my_putchar(' ');
    my_putstr(str);
}

void pf_c_p(int size, va_list list)
{
    char c = va_arg(list, int);

    if (size > 1)
        for (int j = 0; j < (size - 1); j++)
            my_putchar(' ');
    my_putchar(c);
}

void pf_di_p(int size, char p, va_list list)
{
    int nbr = va_arg(list, int);
    int j = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
        j += 1;
    }
    if (size > my_intlen(nbr))
        for (; j < (size - my_intlen(nbr)); j++)
            my_putchar(p);
    my_put_nbr(nbr);
}

void pf_u_p(int size, char p, va_list list)
{
    unsigned int nbr = va_arg(list, unsigned int);

    if (size > my_u_intlen(nbr))
        for (int j = 0; j < (size - my_u_intlen(nbr)); j++)
            my_putchar(p);
    my_put_nbr_un(nbr);
}

void pf_prc_p(int size, va_list list)
{
    (void)va_arg(list, int);
    if (size > 1)
        for (int j = 0; j < (size - 1); j++)
            my_putchar(' ');
    my_putchar('%');
}