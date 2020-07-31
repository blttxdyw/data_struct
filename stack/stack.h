#ifndef __STACK_H
#define __STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef int data_t;	//栈中数据变量的类型

typedef struct 
{
	data_t *data;	//用指正指向栈的存储空间
	int maxlen;		//当前栈的最大存储空间
	int top;		//指向栈顶的位置变量(数组下标)
}seqstack_t;		//顺序栈类型定义


extern seqstack_t *stack_create(int len);
extern data_t stack_empty(seqstack_t *s);
extern void stack_clear(seqstack_t *s);
extern data_t stack_full(seqstack_t *s);
extern data_t stack_push(seqstack_t *s,data_t value);
extern data_t stack_pop(seqstack_t *s);
extern data_t stack_top(seqstack_t *s);
extern void stack_free(seqstack_t *s);

#endif
