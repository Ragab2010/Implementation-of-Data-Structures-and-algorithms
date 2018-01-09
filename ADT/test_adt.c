/*
 * test_adt.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#include "adt.h"
int main(){

	Stack s1;
	s1=creat(2);
	push(s1 , 10);
	push(s1 , 20);
	push(s1 , 30);
	printStack(s1);
	return 0;
}
