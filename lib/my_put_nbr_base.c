/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_put_nbr_base.c
*/

int my_strlen(char const *str);

void my_putchar(char c);

void my_put_nbr_base(unsigned int nb, const char *base)
{
    int lenght = my_strlen(base);
    int res = 0;
    int i = 1;

    if (nb == 0)
        return;
    else if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    my_put_nbr_base(nb / lenght, base);
    res = (nb % lenght);
    nb /= lenght * i;
    my_putchar(base[res]);
}

void my_put_nbr_base_ul(unsigned long int nb, const char *base)
{
    int lenght = my_strlen(base);
    int res = 0;
    int i = 1;

    if (nb == 0)
        return;
    else if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    my_put_nbr_base_ul(nb / lenght, base);
    res = (nb % lenght);
    nb /= lenght * i;
    my_putchar(base[res]);
}