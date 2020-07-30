#ifndef __LINKQUEUE_H__
#define __LINKQUEUE_H__

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int datatype;

//定义链式队列的节点类型
typedef struct linkqueuenode
{
	datatype data;
	struct linkqueuenode *next;
}link_queue_node,*link_queue_pnode;

//将front rear指正封装
typedef struct 	linkqueue
{
	link_queue_pnode front,rear;
}link_queue,*link_pqueue;

extern void init_linkqueue(link_pqueue *Q);
extern bool in_linkqueue(link_pqueue q, datatype data);
extern bool is_empty_linkqueue(link_pqueue q); 
extern bool out_linkqueue(link_pqueue q, datatype *D);
extern void show_linkqueue(link_pqueue q);

#endif
