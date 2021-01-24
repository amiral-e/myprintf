/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** test_my_printf.c
*/

#include "my.h"
#include "printf.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_printf, format_no_flag, .init = cr_redirect_stdout)
{
    char str[6];

    sprintf(str, "test\n");
    my_printf("test\n");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, wrong_flag, .init = cr_redirect_stdout)
{
    my_printf("foo %v bar\n");
    cr_assert_stdout_eq_str("foo %v bar\n");
}

Test(my_printf, s_flag, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %s\n", "bar");
    my_printf("foo %s\n", "bar");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, c_flag, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %car\n", 'b');
    my_printf("foo %car\n", 'b');
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, i_flag, .init = cr_redirect_stdout)
{
    char str[8];

    sprintf(str, "foo %i\n", 42);
    my_printf("foo %i\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, i_flag_neg, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %i\n", -42);
    my_printf("foo %i\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, d_flag, .init = cr_redirect_stdout)
{
    char str[8];

    sprintf(str, "foo %d\n", 42);
    my_printf("foo %d\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, d_flag_neg, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %d\n", -42);
    my_printf("foo %d\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, o_flag, .init = cr_redirect_stdout)
{
    char str[8];

    sprintf(str, "foo %o\n", 42);
    my_printf("foo %o\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, o_flag_neg, .init = cr_redirect_stdout)
{
    char str[17];

    sprintf(str, "foo %o\n", -42);
    my_printf("foo %o\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, u_flag, .init = cr_redirect_stdout)
{
    char str[8];

    sprintf(str, "foo %u\n", 42);
    my_printf("foo %u\n", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, u_flag_neg, .init = cr_redirect_stdout)
{
    char str[16];

    sprintf(str, "foo %u\n", -42);
    my_printf("foo %u\n", -42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, x_flag, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %x\n", 365);
    my_printf("foo %x\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, x_flag_neg, .init = cr_redirect_stdout)
{
    char str[14];

    sprintf(str, "foo %x\n", -365);
    my_printf("foo %x\n", -365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, xm_flag, .init = cr_redirect_stdout)
{
    char str[9];

    sprintf(str, "foo %X\n", 365);
    my_printf("foo %X\n", 365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, xm_flag_neg, .init = cr_redirect_stdout)
{
    char str[14];

    sprintf(str, "foo %X\n", -365);
    my_printf("foo %X\n", -365);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, p_flag, .init = cr_redirect_stdout)
{
    char *test = "hello world";
    char *str = malloc(sizeof(char) * 16);

    sprintf(str, "%p\n", test);
    my_printf("%p\n", test);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_printf, p_flag_nil, .init = cr_redirect_stdout)
{
    int *test = NULL;

    my_printf("%p\n", test);
    cr_assert_stdout_eq_str("(nil)\n");
}

Test(my_printf, sm_flag, .init = cr_redirect_stdout)
{
    char str[5];

    my_strcpy(str, "toto");
    str[1] = 6;
    my_printf("bar %S foo\n", str);
    cr_assert_stdout_eq_str("bar t\\006to foo\n");
}

Test(my_printf, sm_flag_clean_clean, .init = cr_redirect_stdout)
{
    char str[5];

    my_strcpy(str, "toto");
    str[1] = 127;
    my_printf("bar %S foo\n", str);
    cr_assert_stdout_eq_str("bar t\\177to foo\n");
}

Test(my_printf, sm_flag_clean, .init = cr_redirect_stdout)
{
    my_printf("bar %S foo\n", "toto");
    cr_assert_stdout_eq_str("bar toto foo\n");
}

Test(my_printf, n_flag, .init = cr_redirect_stdout)
{
    int one;
    int two;

    printf("%n", &one);
    my_printf("%n", &two);
    cr_assert_eq(one, two);
}

Test(my_printf, b_flag, .init = cr_redirect_stdout)
{
    my_printf("%b\n", 365);
    cr_assert_stdout_eq_str("101101101\n");
}