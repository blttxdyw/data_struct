#include"stack.h"


int main(int argc, char const *argv[])
{
	seqstack_t *S;
	data_t n=3;

	s = stack_create(n);

	stack_push(s,10);
	stack_push(s,20);
	stack_push(s,30);
	stack_push(s,40);

	while(!stack_empty(s))
	{
		printf("%d",stack_pop(s));
	}
	put("");

#if 0
	free(s->data);
	s->data = NULL;
	free(s);
	s = NULL;
#endif
	stack_free(s);
	return 0;
}