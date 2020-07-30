#include "linklist.h"

int main(void)
{
	linklist H,p;
	int n;

	H = list_create2();

	list_show(H);
#if 0
	linklist_insert(H, 0, 100);
	linklist_insert(H, 1, 300);
	linklist_insert(H, 2, 400);
	list_show(H);

	list_delete(H, 0);
	list_show(H);

	list_reverse(H);
	list_show(H);
	
	list_order_insert(H, 30);
	list_show(H);

	list_order_insert(H, 25);
	list_show(H);

	list_order_insert(H, 38);
	list_show(H);
#endif
	list_sort(H);
	list_show(H);

	list_modify_value(H, 0, 100);
	list_show(H);
	return 0;
}
