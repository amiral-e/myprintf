/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** test_my_wrong.c
*/

#include "my.h"
#include "printf.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_printf, flag_flag, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%%i\n");
    my_printf("%%i\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_hash_wrong_f, .init = cr_redirect_stdout)
{
    char str[5];

    sprintf(str, "%#v\n");
    my_printf("%#v\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_hash, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%#\n");
    my_printf("%#\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%0\n");
    my_printf("%0\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, percs, .init = cr_redirect_stdout)
{
    char str[4];

    sprintf(str, "%%%%%\n");
    my_printf("%%%%%\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_perc, .init = cr_redirect_stdout)
{
    char str[2];

    sprintf(str, "%%");
    my_printf("%%");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, perc_zero_int_wrong, .init = cr_redirect_stdout)
{
    char str[5];

    sprintf(str, "%02k\n");
    my_printf("%02k\n");
    cr_assert_stdout_eq_str(str);
}