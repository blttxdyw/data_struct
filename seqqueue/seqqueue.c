#include"seqqueue.h"
	
void init_seqqueue(seq_pqueue q)
{
	if( (q=(seq_pqueue)malloc(sizeof(seq_queue))) == NULL )
	{
		printf("malloc fail!\n");
		return NULL;
	}
	q->front = q->rear = ( MAXSIZE - 1)
}
