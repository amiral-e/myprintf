/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** my_strlen
*/

int my_intlen(int nb)
{
    int i;

    for (i = 0; nb; i++, nb /= 10);
    return (i);
}

int my_u_intlen(unsigned int nb)
{
    int i;

    for (i = 0; nb; i++, nb /= 10);
    return (i);
}