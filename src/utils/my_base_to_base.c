/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "../../includes/utils.h"

char *dec_to_oct(char *dec)
{
    int in = my_itoa(dec);
    char *out = malloc(sizeof(char));
    char *tmp;
    int index = 0;

    out[0] = 0;
    while (in / 8 > 0) {
        tmp = my_strdup(out);
        free(out);
        out = malloc(sizeof(char) * my_strlen(tmp) + 2);
        out[index] = (in % 8) + 48;
        out[index + 1] = 0;
        in /= 8;
        ++index;
    }

}

void *my_base_changer(void *in, base_type in_type, base_type out_type)
{
    
}




