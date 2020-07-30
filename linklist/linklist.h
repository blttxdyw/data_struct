#ifndef __LINKLIST_H
#define __LINKLIST_H

#include "linklist.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int datatype;

typedef struct node
{
	datatype data;
	struct node *next;
}listnode,*linklist;

extern linklist list_create();
extern linklist list_create2();
extern int list_delete(linklist H, int pos);
extern void list_show(linklist H);
extern int list_head_insert(linklist H, datatype value);
extern int list_insert(linklist H, int pos, datatype value);
extern int list_order_insert(linklist H, datatype value);
extern void list_sort(linklist H);
extern linklist list_get(linklist H, int pos);
extern linklist list_located(linklist H,datatype value);
extern void list_reverse(linklist H);
extern void list_modify_value(linklist H, int pos, datatype value);

#endif
