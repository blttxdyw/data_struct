#include "stack.h"


/*
@Function: stack_create
@Describe: create a empty stack
@Return:   success return a pointer s point to stack
		   else return NULL
*/
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


/*
@Function: stack_empty
@Describe: judge the stack if empty or not
@Return:   empty return 1, else return 0
*/
data_t stack_empty(seqstack_t *s)
{
	return ( s->top == -1 ? 1 : 0 );
}


/*
@Function: stack_clear
@Describe: clear the stack
@Return:   NULL
*/
void stack_clear(seqstack_t *s)
{
	s->top = -1;
}


/*
@Function: stack_full
@Describe: judge the stack if full or not
@Return:   full return 1, else return 0
*/
data_t stack_full(seqstack_t *s)
{
	return ( s->top == s->maxlen - 1 ? 1 : 0 );
}


/*
@Function: stack_push
@Describe: push data to the stack
@Return:   success return 0, else return -1
*/
data_t stack_push(seqstack_t *s, data_t value)
{
	if( stack_full(s) )
	{
		printf("stack is full\n");
		return -1;
	}

	s->data[s->top + 1] = value;
	s->top++;
	return 0;
}


/*
@Function: stack_pop
@Describe: pop a data from the stack
@Return:   return the data of pop
*/
data_t stack_pop(seqstack_t *s)
{
	s->top--;
	return s->data[s->top+1];
}


data_t stack_top(seqstack_t *s)
{
	return s->data[s->top];
}


void stack_free(seqstack_t *s)
{
	free(s->data);
	s->data = NULL;
	free(s);
	s = NULL;
}

