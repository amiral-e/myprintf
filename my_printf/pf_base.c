/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** base.c
*/

#include "my.h"
#include "printf.h"

void pf_bin(va_list list)
{
    my_put_nbr_bin(va_arg(list, int));
}

void pf_oct(va_list list)
{
    my_put_nbr_base(va_arg(list, unsigned int), "01234567");
}

void pf_hexa(va_list list)
{
    my_put_nbr_base(va_arg(list, unsigned int), "0123456789abcdef");
}

void pf_hexam(va_list list)
{
    my_put_nbr_base(va_arg(list, unsigned int), "0123456789ABCDEF");
}