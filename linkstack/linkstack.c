#include"linkstack.h"

linklist linkstack_create()
{
	linklist s;
	if( (s=(linklist)malloc(sizeof(listnode))) ==NULL )
	{
		printf("malloc memory fail!!\n");
		return NULL;
	}
	s->data = 0
	s->next = NULL;
	return s;
}


int linkstack_empty(linklist s)
{
	return (s->next == NULL ? 1:0);
}


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


datatype linkstack_top(linklist s)
{
	return (s->next->data);
}


//do not delete header
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
	put("");
}


//delete header 
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
	put("");
}