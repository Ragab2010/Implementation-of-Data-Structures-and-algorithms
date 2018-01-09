/*
 * linkedstack.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

#include "stdlib.h"


#define StackEntry int

/*display function*/


/***StackNode definition***/
typedef struct stackNode{
	StackEntry entry;
	struct stackNode *next;
}StackNode;

/*Stack definition*/
typedef struct stack{
	struct stackNode *top;
	int size;
}Stack;



void push(StackEntry e , Stack *ps);
void pop(StackEntry *pe  , Stack *ps);
int StackSize(Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
void TraverseStack(Stack *ps, void (*pf)(StackEntry));
#endif /* LINKEDSTACK_H_ */
