/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** put_int
*/
#include "include/my_printf.h"

int	my_put_nbr(int nb, int *taille)
{
    int nina = 1;
    if (nb == -2147483648)
        my_putstr("-2147483648", taille);
    if (nb < 0 && nb != -2147483648) {
        nb = nb * (-1);
        *taille = *taille + 1;
        my_putchar('-');
    }
    if (nb >= 0) {
        if (nb >= 10) {
            nina = (nb % 10);
            nb = (nb - nina) / 10;
            my_put_nbr(nb,taille);
            *taille = *taille + 1;
            my_putchar(48 + nina);
        } else {
            *taille = *taille + 1;
            my_putchar(48 + nb % 10);
        }
    }
}

long my_put_octal (long nb, int *taille)
{
    int c = 0;
    if (nb > 0) {
        c = nb % 8;
        my_put_octal(nb / 8, taille);
        my_put_nbr(c, taille);
    }
    return 0;
}

long my_put_binary (long nb, int *taille)
{
    int c = 0;
    if (nb > 0) {
        c = nb % 2;
        my_put_binary(nb / 2, taille);
        my_put_nbr(c, taille);
    }
    return 0;
}

long my_put_hexa_maj (long nb, int *taille)
{
    int c = 0;
    if (nb > 0) {
        c = nb % 16;
        my_put_hexa_maj(nb / 16, taille);
        if (c < 10) {
            *taille = *taille + 1;
            my_putchar(c + 48);
        } else {
            *taille = *taille + 1;
            my_putchar(c + 55);
        }
    }
    return 0;
}

long my_put_hexa_min (long nb, int *taille)
{
    int c = 0;
    if (nb > 0) {
        c = nb % 16;
        my_put_hexa_min(nb / 16, taille);
        if (c < 10) {
            *taille = *taille + 1;
            my_putchar(c + 48);
        } else {
            *taille = *taille + 1;
            my_putchar(c + 87);
        }
    }
    return 0;
}
