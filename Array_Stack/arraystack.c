/*
 * stack.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: RAGAB
 */

#include "arraystack.h"


void CreateStack(Stack *ps){

	ps->top = 0;
}
int push(StackEntry e,Stack *ps){

	if(ps->top == MAXSTACK){
		return 0;
	}else{
		ps->entry[ps->top++] = e;
		return 1;
	}
}

int pop(StackEntry *pe , Stack *ps){
	if(ps->top == 0){
			return 0;
		}else{
			*pe = ps->entry[--ps->top];
			return 1;
		}
}

int StackFull(Stack *ps){
	return (ps->top == MAXSTACK?0:1) ;
}

int StackEmpty(Stack *ps){
	return (ps->top == 0?1:0);
}

void StackTop(StackEntry *pe , Stack *ps){
	*pe =ps->entry[ps->top - 1];
}

int StackSize(Stack *ps){
	return ps->top;
}

void StackClear(Stack *ps){
	ps->top = 0;
}

void TraverseStack(Stack *ps ,void (*pf)(StackEntry e)){
	int i;
	for(i = ps->top- 1 ; i>=0 ; i--){
		(*pf)(ps->entry[i]);
	}
}
