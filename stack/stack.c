#include "stack.h"


seqstack_t *stack_create(int len)
{
	seqstack_t *s;
	if( (s=(seqstack_t *)malloc(sizeof(seqstack_t))) == NULL )
	{
		perror("malloc");
		return NULL;
	}

	if( (s->data = (data_t *)malloc(len*sizeof(data_t))) == NULL )
	{	
		perror("malloc");
		return NULL;
	}

	s->maxlen = len;
	s->top = -1;
	return s;
}


data_t stack_empty(seqstack_t *s)
{

}


void stack_clear(seqstack_t *s)
{

}


data_t statck_full(seqstack_t *s)
{

}


data_t stack_push(seqstack_t *s,data_t value)
{

}


data_t stack_pop(seqstack_t *s)
{

}


data_t stack_top(seqstack_t *s)
{

}


void stack_free(seqstack_t *s)
{

}

