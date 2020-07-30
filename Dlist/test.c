#include"dlist.h"

int main(int argc, char const *argv[])
{
	int pos;
	dlistnode *H, *p;
	H = dlist_create();
	show_dlist(H);


	while(1)
	{
		printf("please input pos:");
		scanf("%d", &pos);
		dlist_delete(H, pos);
		show_dlist(H);
	}

	return 0;
}
