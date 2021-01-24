/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** printf.h
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdarg.h>
#include "my.h"

#ifndef PRINTF_H
#define PRINTF_H

void pf_str(va_list list);
void pf_c(va_list list);
void pf_di(va_list list);
void pf_oct(va_list list);
void pf_sfm(va_list list);
void pf_u(va_list list);
void pf_prc(va_list list);
void pf_hexa(va_list list);
void pf_hexam(va_list list);
void pf_adress(va_list list);
void pf_bin(va_list list);
void pf_n(va_list list, int i);
int check_fp(char f, char *f_tab);
int check_pn(const char *format, int i);
void pf_str_p(int size, va_list list);
void pf_c_p(int size, va_list list);
void pf_di_p(int size, char p, va_list list);
void pf_u_p(int size, char p, va_list list);
void pf_prc_p(int size, va_list list);
int my_printf(const char *format, ...);

#endif /* PRINTF_H */