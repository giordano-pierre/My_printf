/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** utile_2
*/
#include "include/my_printf.h"

int my_strlen (char *str)
{
    int c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] < 127)
            c = c + 1;
        else
            c = c + 4;
    }
    return c;
}

int my_putstr (char const *str, int *taille)
{
    int i = 0;
    while (str[i] != '\0'){
        *taille = *taille + 1;
        my_putchar(str[i]);
        i = i + 1;
    }
}

long signe_long (long nb, int *taille)
{
    if (nb < 0) {
        nb = nb * (-1);
        *taille = *taille + 1;
        my_putchar('-');
    }
    return (nb);
}

int my_nbrlen_g (double nb, int d, int diez)
{
    int compt = 0;
    int nb1 = (int)nb;
    int nb2 = (nb - nb1) * d;
    int nb3 = (nb - nb1) * d * 10;
    compt = compt + my_nbrlen(nb1);
    if (nb2 != 0 || diez == 1) {
        compt = compt + 1;
        if (nb3 % 10 >= 5)
            nb2 = nb2 + 1;
        while (nb2 < d / 10) {
            compt = compt + 1;
            d /= 10;
        }
        while (nb2 % 10 == 0 && diez == 0) {
            nb2 = nb2 / 10;
        }
        compt = compt + my_nbrlen(nb2);
    }
}
