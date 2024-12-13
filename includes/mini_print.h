/*
** EPITECH PROJECT, 2022
** mini_print.h
** File description:
** header files that contetains files
*/

#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
void mini_printf(const char *format, ...);
