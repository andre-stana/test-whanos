/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** My_putchar
*/

#include "mini_print.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
