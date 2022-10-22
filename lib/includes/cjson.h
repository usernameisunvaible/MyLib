/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#ifndef CJSON_H_
    #define CJSON_H_

    #define JSON_STRING_CHAR "\"'"
    #define OPEN_VALUE_CHAR "\"'{["
    #define CLOSE_VALUE_CHAR "\"'}]"
    #define KEY_CHAR "\"'"
    #define OPEN_CHAR "{"
    #define CLOSE_CHAR "}"
    #define VALUE_CHAR ":"
    #define SPLIT_CHAR ","
    #define NULL_CHAR " \n\t"

#include "utils.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



typedef struct data_s{
    char *key;
    char *value;
    struct data_s *next;
}data;

typedef struct{
    data *data;
    int lenght;
}cjson;





//free the obj
void cjson_free(cjson *obj);
//append data at the begining of the obj
cjson *cjson_push(cjson *obj, int nb, ...);
//return NULL if not found
const char *cjson_get_by_key(const cjson *obj, const char *key);
//return NULL if not found
const char *cjson_get_by_index(const cjson *obj, const int index);

char *cjson_get_obj_str(const cjson *obj, bool pretty);
cjson *cjson_init(void);
char ***cjson_get_obj_array(const cjson *obj);
void cjson_free_obj_array(char ***obj_array);
void cjson_delete_by_key(cjson *obj, const char *key);
void cjson_delete_by_index(cjson *obj, const int index);
void cjson_set_by_key(cjson *obj, const char *key, const char *value);
void cjson_set_by_index(cjson *obj, const int index, const char *value);
char get_the_char(const char *src, int *i);
bool get_next(const char *src, int *index, char *good, bool m_index);
bool is_char_in(char c, const char *ex);
void add_node(char *key, char *value, data **obj);
cjson *cjson_parse_obj_str(const char *src);
bool cjson_write_file(char *path, int flags, const cjson *obj);
cjson *cjson_read_file(const char *path, int buf);


#endif // !CJSON_H_
