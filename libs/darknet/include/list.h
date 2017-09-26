#ifndef LIST_H
#define LIST_H
#include "darknet.h"

list1 *make_list();
int list_find(list1 *l, void *val);

void list_insert(list1 *, void *);


void free_list_contents(list1*l);

#endif
