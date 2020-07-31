#ifndef __SEQQUEUE_H__
#define __SEQQUEUE_H__

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int datatype;
#define MAXSIZE	10

typedef struct seqqueuenode
{
	datatype data[MAXSIZE];
	datatype front, rear;
}seq_queue,*seq_pqueue;


extern void init_seqqueue(seq_pqueue *Q);
extern bool in_seqqueue(seq_pqueue q, datatype data);
extern bool is_empty_seqqueue(seq_pqueue q); 
extern bool out_seqqueue(seq_pqueue q, datatype *D);
extern void show_seqqueue(seq_pqueue q);
extern bool is_full_seqqueue(seq_pqueue q);
extern void seq_queue_free(seq_pqueue q);
#endif
