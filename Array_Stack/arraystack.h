/*
 * stack.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_

/*We use camel case style like java */
typedef int StackEntry;
#define MAXSTACK 15

typedef struct stack {
	int top;
	StackEntry entry[MAXSTACK];

}Stack;

/*FUN PROTOTYPE*/
void CreateStack(Stack *ps);
int push(StackEntry e,Stack *ps);
int pop(StackEntry *pe , Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(StackEntry *pe , Stack *ps);
int StackSize(Stack *ps);
void StackClear(Stack *ps);
void TraverseStack(Stack *ps ,void (*pf)(StackEntry ));

#endif /* ARRAYSTACK_H_ */
