#include "linkqueue.h"

void init_linkqueue(link_pqueue *Q) 
{
	if( (*Q=(link_pqueue)malloc(sizeof(link_queue))) == NULL )
	{
		printf("malloc fail\n");
		exit(-1);
	}

	(*Q)->front = (link_queue_pnode)malloc(sizeof(link_queue_node));
	if(NULL == (*Q)->front)
	{
		perror("malloc");exit(-1);
	}

	(*Q)->front->next = NULL;
	(*Q)->rear = (*Q)->front;
}


bool in_linkqueue(link_pqueue q, datatype data)
{
	link_queue_pnode new;

	new = (link_queue_pnode)malloc(sizeof(link_queue_node));
	if(NULL == new)
	{
		perror("malloc");
		return false;
	}

	new->data = data;
	new->next = q->rear->next;
	q->rear->next = new;

	q->rear = q->rear->next;
	return true;
}


bool is_empty_linkqueue(link_pqueue q)
{
	if( q->rear == q->front )
		return true;
	else 
		return false;
}


bool out_linkqueue(link_pqueue q, datatype *D)
{
	link_queue_pnode t; 
	if( is_empty_linkqueue(q) )
	{
		printf("linkqueue is empty!\n");
		return false;
	}


	t = q->front;
	q->front = q->front->next;
	*D = q->front->data;
	free(t);
	return true;
}


void show_linkqueue(link_pqueue q)
{
	link_queue_pnode p;
	if( is_empty_linkqueue(q) )
		return;

	for( p = q->front->next; p != NULL; p = p->next  )
	{
		printf("%d\t", p->data);
	}
	printf("\n");
}
