/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "../../includes/utils.h"

int my_index_of(char *str, char c)
{
    for (int i = 0; str[i]; ++i) {
        if (c == str[i])
            return i;
    }
    return -1;
}