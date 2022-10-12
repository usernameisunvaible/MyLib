/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "../../header/cjson.h"
#include "../../header/utils.h"

const char *cjson_get_by_key(const cjson *obj, const char *key)
{
    const data *temp;

    temp = obj->data;
    while (temp != NULL) {
        if (my_strcomp(key, temp->key))
            return temp->value;
        temp = temp->next;
    }
    return NULL;
}

const char *cjson_get_by_index(const cjson *obj, const int index)
{
    const data *temp;
    int i = 0;

    temp = obj->data;
    while (i != index) {
        if (temp->next != NULL)
            temp = temp->next;
        else
            return NULL;
        ++i;
    }
    return temp->value;
}
