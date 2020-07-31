#include "seqqueue.h"

/*
@Function: init_seqqueue
@Describe:	create a sequential queue
@Return:	
*/
void init_seqqueue(seq_pqueue *Q) 
{
	if( (*Q=(seq_pqueue)malloc(sizeof(seq_queue))) == NULL )
	{
		printf("malloc fail\n");
		exit(-1);
	}

	(*Q)->front = (*Q)->rear = MAXSIZE - 1;
}


bool is_full_seqqueue(seq_pqueue q)
{
	if( (q->rear + 1) % MAXSIZE == q->front )
		return true;
	else
		return false;
}


bool in_seqqueue(seq_pqueue q, datatype data)
{
	if( is_full_seqqueue(q) )
	{
		printf("queue is full\n");
		return false;
	}

	q->rear = (q->rear + 1) % MAXSIZE;
	q->data[q->rear] = data;
	return true;
}


bool is_empty_seqqueue(seq_pqueue q)
{
	if( q->rear == q->front )
		return true;
	else 
		return false;
}


bool out_seqqueue(seq_pqueue q, datatype *D)
{
	if( is_empty_seqqueue(q) )
	{
		printf("seqqueue is empty!\n");
		return false;
	}

	q->front = (q->front + 1) % MAXSIZE;
	*D = q->data[q->front];
	return true;
}


void show_seqqueue(seq_pqueue q)
{
	int i;
	if( is_empty_seqqueue(q) )
		return;

	for( i = (q->front+1) % MAXSIZE; i != (q->rear+1)%MAXSIZE; i=(i+1)%MAXSIZE  )
	{
		printf("%d\t", q->data[i]);
	}
	printf("\n");
}


void seq_queue_free(seq_pqueue q)
{
	if(q)
	{
		free(q);
		q = NULL;
	}
}
