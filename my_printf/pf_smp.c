/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** pf_simple.c
*/

#include "my.h"
#include "printf.h"

void pf_n(va_list list, int i)
{
    int *nb = va_arg(list, int *);
    *nb = (i - 1);
}

void pf_adress(va_list list)
{
    unsigned long int nb = va_arg(list, unsigned long int);

    if (!nb)
        my_putstr("(nil)");
    else {
        my_putstr("0x");
        my_put_nbr_base_ul(nb, "0123456789abcdef");
    }
}

void pf_sfm_oct(int c)
{
    int oct = my_itooct(c);
    int i = 1;

    my_putchar('\\');
    for (int tmp = oct; tmp; tmp /= 10, i++);
    for (int j = 0; j <= (3 - i); j++)
        my_putchar('0');
    my_put_nbr(oct);
}

void pf_sfm(va_list list)
{
    char *str = va_arg(list, char *);

    for (int i = 0 ; str[i] ; i++ ) {
        if (32 <= str[i] && str[i] <= 126)
            my_putchar(str[i]);
        else
            pf_sfm_oct(str[i]);
    }
}