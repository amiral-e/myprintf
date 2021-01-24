/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_put_nbr_unhex.c
*/

#include <stdbool.h>

void my_putchar(char c);

void my_put_nbr_unhex(unsigned int nb, bool maj, int neg)
{
    int size = 16;

    if (nb > (unsigned)size - 1)
        my_put_nbr_unhex(nb / size, false, neg);
    if (maj == true || neg == 1)
        my_putchar("0123456789ABCDEF"[nb % size]);
    else
        my_putchar("0123456789abcdef"[nb % size]);
}