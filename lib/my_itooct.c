/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_itooct.c
*/

unsigned int my_itooct(unsigned int nb)
{
    unsigned int oct = 0;

    for (int i = 1; nb != 0; nb /= 8, i *= 10)
        oct += (nb % 8) * i;
    return oct;
}

unsigned long int my_u_itooct(unsigned long int nb)
{
    unsigned long int octalNumber;

    for (int i = 1; nb > 0; i *= 10) {
        octalNumber += (nb % 8) * i;
        nb = nb / 8;
    }
    return (octalNumber);
}