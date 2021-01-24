/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** test_my_padding.c
*/

#include "my.h"
#include "printf.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_printf, hash_d, .init = cr_redirect_stdout)
{
    char str[5];

    sprintf(str, "%#d\n", 365);
    my_printf("%#d\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, hash_i, .init = cr_redirect_stdout)
{
    char str[5];

    sprintf(str, "%#i\n", 365);
    my_printf("%#i\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, hash_o, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "%#o\n", 365);
    my_printf("%#o\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, hash_x, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%#x\n", 365);
    my_printf("%#x\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, hash_xm, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%#X\n", 365);
    my_printf("%#X\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_perc_more, .init = cr_redirect_stdout)
{
    my_printf("%02%\n");
    cr_assert_stdout_eq_str(" %\n");
}

Test(my_printf, perc_zero_int_perc_eq, .init = cr_redirect_stdout)
{
    my_printf("%01%\n");
    cr_assert_stdout_eq_str("%\n");
}

Test(my_printf, perc_int_perc_more, .init = cr_redirect_stdout)
{
    my_printf("%2%\n");
    cr_assert_stdout_eq_str(" %\n");
}

Test(my_printf, perc_int_perc_eq, .init = cr_redirect_stdout)
{
    my_printf("%1%\n");
    cr_assert_stdout_eq_str("%\n");
}

Test(my_printf, perc_d_eq, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "%2d\n", 42);
    my_printf("%2d\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_i_eq, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "%2i\n", 42);
    my_printf("%2i\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_d_more, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "%4d\n", 42);
    my_printf("%4d\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_i_more, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "%4i\n", 42);
    my_printf("%4i\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_d, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%0d\n", 42);
    my_printf("%0d\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_i, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%0i\n", 42);
    my_printf("%0i\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_s_eq, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05s\n", "hello");
    my_printf("%05s\n", "hello");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_s_more, .init = cr_redirect_stdout)
{
    char str[10];

    sprintf(str, "%8s\n", "hello");
    my_printf("%8s\n", "hello");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_s_eq, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%5s\n", "hello");
    my_printf("%5s\n", "hello");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_c_more, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05c\n", 'a');
    my_printf("%05c\n", 'a');
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_c_more, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%5c\n", 'a');
    my_printf("%5c\n", 'a');
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_c_equ, .init = cr_redirect_stdout)
{
    char str[3];

    sprintf(str, "%1c\n", 'a');
    my_printf("%1c\n", 'a');
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_i, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05i\n", 42);
    my_printf("%05i\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_i_neg, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05i\n", -42);
    my_printf("%05i\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_d, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05d\n", 42);
    my_printf("%05d\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_d_neg, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05d\n", -42);
    my_printf("%05d\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_u, .init = cr_redirect_stdout)
{
    char str[7];

    sprintf(str, "%05u\n", 42);
    my_printf("%05u\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_more_u_neg, .init = cr_redirect_stdout)
{
    char str[12];

    sprintf(str, "%05u\n", -42);
    my_printf("%05u\n", -42);
    cr_assert_stdout_eq_str(str);
}