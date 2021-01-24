/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr
*/

int my_strlen(char const *str);

int get_nbr_check(char const *str)
{
    int neg = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            neg++;
    return (neg);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = get_nbr_check(str);
    int i;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++);
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        if (nb > 0)
            nb = -nb;
        if (((str[i] >= '0' && str[i] <= '9') &&
        (str[i - 10] >= '0' && str[i - 10] <= '9')) ||
        (nb == -214748364 && str[i] == '9'))
            return (0);
        nb = nb * 10 - str[i] + '0';
    }
    if ((nb == -2147483648) && !(neg % 2))
        return (0);
    if (neg % 2)
        return (nb);
    return (nb *= -1);
}
