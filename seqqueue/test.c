/*
1、用循环队列实现如下功能:用户从键盘输入整数,程序将其入队,
					 用户输入字母,程序将队头元素出队,并在每一次入队和出队后打印元素
*/

#include"seqqueue.h"


int main(int argc, char const *argv[])
{
    seq_pqueue q;
    datatype data, res;
    datatype ret;
    init_seqqueue(&q);

    while(1)
    {
        printf("please input a number:");
        ret = scanf("%d", &data);
        if(ret)
        {
        	if( in_seqqueue(q, data) )
        		show_seqqueue(q);
        }
        else
        {
        	if( out_seqqueue(q, &res) )
        	{
        		printf("out:%d\n", res);
        		show_seqqueue(q);
        	}
        	//清空输入缓冲区
        	while(getchar()!='\n');
        }
    }
	seq_queue_free(q);
	return 0;
}
