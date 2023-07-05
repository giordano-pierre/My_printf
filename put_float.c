/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** put_float
*/
#include "include/my_printf.h"

void my_put_float (double nb, int d, int *taille)
{
    int nb1 = (int)nb;
    my_put_nbr(nb1, taille);
    int nb2 = (nb - nb1) * d;
    int nb3 = (nb - nb1) * d * 10;
    *taille = *taille + 1;
    if (d != 0)
        my_putchar('.');
    if (nb3 % 10 >= 5)
        nb2 = nb2 + 1;
        while (nb2 < d / 10) {
            *taille = *taille + 1;
            my_putchar('0');
            d /= 10;
        }
if (nb2 != 0)
        my_put_nbr(nb2, taille);
}

void my_put_float_super_g (double nb, int d, int *taille, int diez)
{
    int nb1 = (int)nb;
    int nb2 = (nb - nb1) * d;
    int nb3 = (nb - nb1) * d * 10;
    my_put_nbr(nb1, taille);
    if (nb2 != 0 || diez == 1) {
        my_putchar('.');
        if (nb3 % 10 >= 5)
            nb2 = nb2 + 1;
        while (nb2 < d / 10) {
            *taille = *taille + 1;
            my_putchar('0');
            d /= 10;
        }
        while (nb2 % 10 == 0 && diez == -1) {
            nb2 = nb2 / 10;
        }
        my_put_nbr(nb2, taille);
    }
}

void my_put_float_g_min (double nb, int pre, int *taille, int diez)
{
    int nb1 = (int)nb;
    int c = 0;
    if (nb >= pre) {
        my_put_scientific_g_min(nb, pre / 10, taille, diez);
    } else if (nb <= pre / 10) {
        int t = my_nbrlen(nb1);
        pre = precision(pre, t);
        my_put_float_super_g(nb, pre, taille, diez);
    } else {
        int temp = nb * 10;
        if (temp % 10 >= 5)
            nb1 = nb1 + 1;
        my_put_nbr (nb1, taille);
    }
}

void my_put_float_g_maj (double nb, int pre, int *taille, int diez)
{
    int nb1 = (int)nb;
    if (nb >= pre) {
        my_put_scientific_g_maj(nb, pre / 10, taille, diez);
    } else if (nb <= pre / 10) {
        int t = my_nbrlen(nb1);
        pre = precision(pre, t);
        my_put_float_super_g(nb, pre, taille, diez);
    } else {
        int temp = nb * 10;
        if (temp % 10 >= 5)
            nb1 = nb1 + 1;
        my_put_nbr (nb1, taille);
    }
}

int precision(int pre, int t)
{
    for (int i = 0; i < t; i++)
        pre = pre / 10;
    return (pre);
}
