/*
** EPITECH PROJECT, 2020
** cpday09
** File description:
** my.h
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>

#ifndef MY_H
#define MY_H

#define CTOI(x) ((x) - '0')
#define ITOC(x) ((x) + '0')
#define GETBIG(x, y) (((x) < (y)) ? (y) : (x))
#define GETLOW(x, y) (((x) < (y)) ? (x) : (y))

#define ABS(value) ((value < 0) ? (-value) : (value))
#define EVAL_SUM(value) (number(value) + number(value))
#define EVAL_SUB(value) (number(value) - number(value))
#define EVAL_MUL(value) (number(value) * number(value))
#define EVAL_DIV(value) (number(value) / number(value))
#define EVAL_MOD(value) (number(value) % number(value))

#define CHAR_IS_NUM(c) (('0' <= (c) && (c) <= '9') ? (1) : (0))
#define CHAR_IS_ALPHALO(c) (((c) - 'a') <= ('z' - 'a') ? (1) : (0))
#define CHAR_IS_ALPHAUP(c) (((c) - 'A') <= ('Z' - 'A') ? (1) : (0))
#define CHAR_IS_ALPHA(c) (CHAR_IS_ALPHALO(c) || CHAR_IS_ALPHAUP(c))
#define CHAR_IS_ALPHANUM(c) (CHAR_IS_ALPHA(c) || CHAR_IS_NUM(c))

void my_put_nbr_base_ul(unsigned long int nb, const char *base);
void my_put_nbr_base(unsigned int nb, const char *base);
void my_put_nbr_bin(int nb);
void my_put_nbr_un(unsigned int nb);
void my_put_nbr_ul(unsigned long int nb);
void my_put_nbr_unhex(unsigned int nb, bool maj, int neg);
char *my_itoa(int nb);
unsigned int my_itooct(unsigned int nb);
unsigned long int my_u_itooct(unsigned long int nb);

char *my_revstr_neg(char *str);
char *rev_av(char *str);
char *ret_malloc(char *s1, char *s2);
bool my_str_is_numop(char *str);
char calc_add(int *rtn, char b, char c);
char *calc_neg_man(char *ret, char *s1, char *s2);
char *calc_add_man(char *ret, char *s1, char *s2);
char *infinadd_man(char *s1, char *s2);

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);

int my_is_prime(int nb);
int my_find_prime_sup(int nb);

int my_intlen(int nb);
int my_u_intlen(unsigned int nb);
int my_strlen(char const *str);
int get_nbr_check(char const *str);
int my_getnbr(char const *str);

int my_isneg(int nb);
int my_is_prio(char c);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);

int my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
void my_put_nbr(int nb);

void my_sort_int_array(int *array, int size);
void my_swap(int *a, int *b);

char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);

int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_is_alphanum(char c);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_is_operator(char c);

char *my_strcapitalize(char *str);
char *my_strstr(char *str, char const *to_find);

char *concat_params(int ac, char **av);
int my_show_word_array(char * const * tab);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);

#endif /* MY_H */
