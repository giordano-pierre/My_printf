/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** create_array
*/
#include "include/my_printf.h"

int verif_special_flags (char *s, int *indice)
{
    if (s[*indice] == '#' || s[*indice] == '-' || s[*indice] == '+' ||
    s[*indice] == ' ' || s[*indice] == '0' || s[*indice] == '.' ||
    s[*indice] <= '9' && s[*indice] > '0' || s[*indice] == 'l' ||
    s[*indice] == '*')
        return 1;
    return 0;
}

int	my_getnbr_flag(char const *str, int *indice)
{
    int	nb = 0;
    int	signe = 1;
    int j = 0;
    while (str[j] != '\0'){
        if (str[j] >= '0' && str[j] <= '9'){
            nb = nb * 10;
            nb = nb + str[j] - '0';
            j = j + 1;
            *indice = *indice + 1;
        } else {
            *indice = *indice - 1;
            return (nb * signe);
        }
    }
    return (nb * signe);
}

void create_array_3 (int *array, char *s, int *indice)
{
    if (s[*indice] == ' ') {
        array[5] = 1;
    }
    if (s[*indice] <= '9' && s[*indice] > '0' &&
    array[4] == -1 && array[3] == -1)
        array[6] = my_getnbr_flag(s + *indice, indice);
    *indice = *indice + 1;
    if (s[*indice] == '*') {
        array[8] = 1;
    }
}

void create_array_2 (int *array, char *s, int *indice)
{
    if (s[*indice] == '#')
        array[0] = 1;
    if (s[*indice] == '-')
        array[1] = 1;
    if (s[*indice] == '+')
        array[2] = 1;
    if (s[*indice] == '.') {
        *indice = *indice + 1;
        array[3] = my_getnbr_flag(s + *indice, indice);
    }
    if (s[*indice] == '0' && array[1] == -1) {
        *indice = *indice + 1;
        array[4] = my_getnbr_flag(s + *indice, indice);
    }
    create_array_3 (array, s, indice);
}

int create_array (int *array, char *s, int indice, int *taille)
{
    int j;
    int stock = indice;
    for (j = 0; j < 9; j++)
        array[j] = -1;
    array[j] = 0;
    indice = indice + 1;
    while (verif_special_flags(s, &indice) == 1) {
        create_array_2 (array, s, &indice);
    }
    array[7] = s[indice];
    if (array[3] == -1 && array[7] != 's')
        array[3] = 6;
    if (verif_flag(array[7], taille) == 0)
        return indice;
    return stock;
}
