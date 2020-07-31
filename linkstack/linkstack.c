#include"linkstack.h"


/*
@Function: 	linkstack_create
@Describe:	create a empty link stack
@Return	 :	sucess return a pointer, or else return NULL
*/
linklist linkstack_create()
{
	linklist s;
	if( (s=(linklist)malloc(sizeof(listnode))) ==NULL )
	{
		printf("malloc memory fail!!\n");
		return NULL;
	}
	s->data = 0;
	s->next = NULL;
	return s;
}


/*
@Function: 	linkstack_empty
@Describe:	judge the link stack if it is empty
@Return	 :	empty return 1, or else return 0
*/
int linkstack_empty(linklist s)
{
	return (s->next == NULL ? 1:0);
}


/*
@Function: 	linkstack_push
@Describe:	push a data to the link stack
@Return	 :	sucess return 0, or else return -1
*/
int linkstack_push(linklist s,datatype value)
{
	linklist p;
	if( (p=(linklist)malloc(sizeof(listnode))) == NULL )
	{
		printf("malloc memory fail\n");
		return -1;
	}

	p->data = value;
	p->next = s->next;
	s->next = p;
	return 0;
}


/*
@Function: 	linkstack_pop
@Describe:	pop a data from the link stack
@Return	 :	sucess return the data pop
*/
datatype linkstack_pop(linklist s)
{
	linklist p;
	datatype ret;

	p = s->next;
	s->next = p->next;
	ret = p->data;
	free(p);
	p = NULL;
	return ret;
}


/*
@Function: 	linkstack_top
@Describe:	get the data on top from the link stack
@Return	 :	sucess return the data
*/
datatype linkstack_top(linklist s)
{
	return (s->next->data);
}

/*
@Function: 	linkstack_clear
@Describe:	delete all the node from the stack,
			but do not delete header
@Return	 :	NULL
*/
void linkstack_clear(linklist s)
{
	linklist p;
	p = s->next;
	printf("clear:");
	while(p)
	{
		s->next = p->next;
		printf("%d ",p->data);
		free(p);
		p = s->next;
	}
	puts("");
}


/*
@Function: 	linkstack_free
@Describe:	delete all the node from the stack,
			and delete header
@Return	 :	NULL
*/ 
void linkstack_free(linklist s)
{
	linklist p;

	printf("free:");
	p = s;
	while(p)
	{
		s = s->next;
		printf("%d ", p->data);
		free(p);
		p = s;
	}
	puts("");
}
