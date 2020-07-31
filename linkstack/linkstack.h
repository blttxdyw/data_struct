#ifndef __LINKSTACK_H
#define __LINKSTACK_H

#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct node
{
	datatype data;
	struct node *next;
}listnode,*linklist;


extern linklist linkstack_create();
extern int linkstack_empty(linklist s);
extern int linkstack_push(linklist s,datatype value);
extern datatype linkstack_pop(linklist s);
extern datatype linkstack_top(linklist s);
extern void linkstack_clear(linklist s);
extern void linkstack_free(linklist s);

#endif
