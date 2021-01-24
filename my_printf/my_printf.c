/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"
#include "my.h"

void call_flag(va_list list, int f)
{
    void (*fp[128]) (va_list list);

    fp['s'] = &pf_str;
    fp['c'] = &pf_c;
    fp['d'] = &pf_di;
    fp['i'] = &pf_di;
    fp['o'] = &pf_oct;
    fp['u'] = &pf_u;
    fp['x'] = &pf_hexa;
    fp['X'] = &pf_hexam;
    fp['p'] = &pf_adress;
    fp['b'] = &pf_bin;
    fp['S'] = &pf_sfm;
    fp['%'] = &pf_prc;
    fp[f](list);
}

void p_hash(char c)
{
    switch (c) {
        case 'o':
            my_putchar('0');
            break;
        case 'x':
            my_putstr("0x");
            break;
        case 'X':
            my_putstr("0X");
            break;
    }
}

void p_zs(va_list list, const char *format, int *i, char p)
{
    int size = my_getnbr(format + *i);

    for (; '0' <= format[*i] && format[*i] <= '9'; *i += 1);
    if (format[*i] == 's')
        pf_str_p(size, list);
    else if (format[*i] == 'c')
        pf_c_p(size, list);
    if (format[*i] == 'd' || format[*i] == 'i')
        pf_di_p(size, p, list);
    else if (format[*i] == 'u')
        pf_u_p(size, p, list);
    if (format[*i] == '%')
        pf_prc_p(size, list);
}

int man_flag_id(va_list list, const char *format, int i)
{
    if (format[i] == '#') {
        p_hash(format[i++ + 1]);
        call_flag(list, format[i]);
    } else if (format[i] == '0') {
        if (my_getnbr(format + (i)) == 0)
            call_flag(list, format[i++ + 1]);
        else
            p_zs(list, format, &i, '0');
    } else
        p_zs(list, format, &i, ' ');
    return (i);
}

int my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%' && check_fp(format[i + 1], "scdiouxXpbSn%")) {
            if (format[i + 1] == 'n')
                pf_n(list, (i++ + 1));
            else
                call_flag(list, format[i++ + 1]);
        } else if (format[i] == '%' && check_pn(format, i + 1))
            i = man_flag_id(list, format, (i++ + 1));
        else
            my_putchar(format[i]);
    }
    va_end(list);
    return (0);
}