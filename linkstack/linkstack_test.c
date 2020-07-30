#include"linkstack.h"

int int main(int argc, char const *argv[])
{
	linklist s;

	s = linkstack_create();

	linkstack_push(s,10);
	linkstack_push(s,20);
	linkstack_push(s,30);
	linkstack_push(s,40);

	linkstack_clear(s);
#if 0
	while(!linkstack_empty(s))
	{
		printf("%d",linkstack_pop(s) );	
	}
#endif
	put("");
	return 0;
}