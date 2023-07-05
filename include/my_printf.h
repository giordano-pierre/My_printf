/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** my_printf
*/
#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

    int my_printf (char *s, ...);
    int verif_flag (int nb, int *taille);
    void print_flag (int *array, va_list args, int *taille);
    int verif_special_flags (char *s, int *indice);
    int	my_getnbr_flag(char const *str, int *indice);
    int create_array (int *array, char *s, int indice, int *taille);
    void create_array_2 (int *array, char *s, int *indice);
    void create_array_3 (int *array, char *s, int *indice);

    void print_special_flags_1 (int *array, long x, int *taille);


    int count_char_int (int *array, long x);
    int count_char_int_2 (int *array, long x);
    int count_char_float (int *array, double x);
    int count_char_float_2 (int *array, double x);
    int count_char_string (int *array, char *x);

    long my_count_octal (long nb, long *p);
    long my_count_binary (long nb, long *p);
    long my_count_hexa (long nb, long *p);

    void print_diez (int *array, int x, int *taille);
    void print_plus_int (int *array, int x, int *taille);
    void print_plus_float (int *array, double x, int *taille);
    void print_plus_pointeur (int *array, long long x, int *taille);

    void print_space_int (int *array, int x, int *taille);
    void print_space_float (int *array, double x, int *taille);
    void print_space_pointeur (int *array, long long x, int *taille);

    void print_space (int *array, long x, int *taille, char c);
    void print_space_2 (int *array, double x, int *taille, char c);
    void print_space_3 (int *array, long long x, int *taille, char c);
    void print_space_4 (int *array, char *x, int *taille, char c);
    void print_space_5 (int *array, char x, int *taille, char c);


    void my_print_integer (int *array, va_list args, int *taille);
    void my_print_octale (int *array, va_list args, int *taille);
    void my_print_binary (int *array, va_list args, int *taille);
    void my_print_hexa_maj (int *array, va_list args, int *taille);
    void my_print_hexa_min (int *array, va_list args, int *taille);

    void my_print_char (int *array, va_list args, int *taille);
    void my_print_string (int *array, va_list args, int *taille);
    void my_print_string_octale (int *array, va_list args, int *taille);
    void my_print_modulo (int *array, va_list args, int *taille);

    void my_print_float (int *array, va_list args, int *taille);
    void my_print_float_g (int *array, va_list args, int *taille);
    void my_print_scientific (int *array, va_list args, int *taille);

    void my_print_pointeur (int *array, va_list args, int *taille);
    void my_return_lenght (int *array, va_list args, int *taille);


    int my_put_nbr (int nb, int *taille);
    long my_put_octal (long nb, int *taille);
    long my_put_binary (long nb, int *taille);
    long my_put_hexa_maj (long nb, int *taille);
    long my_put_hexa_min (long nb, int *taille);

    void my_putchar(char c);
    int my_putstr_modif (char const *str, int pre, int *taille);
    void my_put_string_octale (char *str, int *taille);
    void my_put_zero (char c, int *taille);

    void my_put_float (double nb, int d, int *taille);
    void my_put_float_super_g (double nb, int d, int *taille, int diez);
    void my_put_float_g_min (double nb, int pre, int *taille, int diez);
    void my_put_float_g_maj (double nb, int pre, int *taille, int diez);
    int precision(int pre, int t);

    void put_scientific_signe (int c, int *taille);
    void my_put_scientific_min (double nb, int pre, int *taille);
    void my_put_scientific_maj (double nb, int pre, int *taille);
    void my_put_scientific_g_min (double nb, int pre, int *taille, int diez);
    void my_put_scientific_g_maj (double nb, int pre, int *taille, int diez);

    int my_put_pointeur (long long nb, int *taille);

    int signe_int (int nb, int *taille);
    double signe_float (double nb, int *taille);
    int my_nbrlen (int nb);
    int my_compute_power_rec(int nb, int p);
    int convert_precision(int *array);

    int my_strlen (char *str);
    int my_putstr (char const *str, int *taille);
    long signe_long (long nb, int *taille);
    int my_nbrlen_g (double nb, int d, int diez);

#endif /* !MY_PRINTF_H_ */
