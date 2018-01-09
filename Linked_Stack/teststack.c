/*
 * testStack.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */


#include "stdio.h"
#include "linkedstack.h"

void displayStack(int e){
	printf("%d \n" , e);
}

int main(){

	Stack tc;
	CreateStack(&tc);
	int e =15;
	push(e , &tc);
	e=30;
	push(e , &tc);
	e=50;
	push(e , &tc);
	printf("Stack size = %d\n" , StackSize(&tc));
	TraverseStack(&tc , displayStack);
	pop(&e , &tc);
	printf("the pop element =%d ",e);
	if(!StackEmpty(&tc))
		printf("the Stack is empty");


	return 0;
}
