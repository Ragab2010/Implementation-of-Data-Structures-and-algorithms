/*
 * linkedstack.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#include "linkedstack.h"

void CreateStack(Stack *ps){
	ps->top=NULL;
	ps->size=0;
}

void push(StackEntry e , Stack *ps){
	StackNode *pn =(StackNode *) malloc(sizeof(StackNode));
	pn->entry =e;
	pn->next=ps->top;
	ps->top=pn;
	ps->size++;
}

void pop(StackEntry *pe  , Stack *ps){
	StackNode *p;
	*pe =ps->top->entry;
	p=ps->top;
	ps->top=ps->top->next;
	free(p);
	ps->size--;
}

int StackFull(Stack *ps){
	return 0;
}

int StackEmpty(Stack *ps){
	return 1;
}
void StackClear(Stack *ps){
	StackNode *pn = ps->top;
	while(pn){
		pn=pn->next;
		free(ps->top);
		ps->top=pn;
	}
	ps->size=0;

}

void TraverseStack(Stack *ps, void (*pf)(StackEntry)){
	StackNode *p;
	for(p=ps->top; p;p=p->next){
		(*pf)(p->entry);
	}

}
int StackSize(Stack *ps){
	return ps->size;
}

