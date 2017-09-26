#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


int read_option(char *s, list1 *options);
void option_insert(list1 *l, char *key, char *val);
char *option_find(list1 *l, char *key);
int option_find_int_quiet(list1 *l, char *key, int def);
float option_find_float(list1 *l, char *key, float def);
float option_find_float_quiet(list1 *l, char *key, float def);
void option_unused(list1 *l);

#endif
