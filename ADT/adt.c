/*
 * adt.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */


#include <stdlib.h>
#include <stdio.h>
#include "adt.h"



#define SIZE 10



struct struct_type{
	Item *value;
	int top;
	int size;
};

Stack creat(int size){
	Stack  s = malloc(sizeof(struct struct_type));
	if(s == NULL){
		printf("program can't aloocate memory ");
		exit(1);
	}
	s->value = malloc( sizeof(struct struct_type));
	s->top=0;
	s->size =size;
	return s;
}
int push(Stack sp , int val){
	sp->value[sp->top]= val;
	sp->top++;
	return 1;
}
void printStack(Stack s){
	int i;
	for(i=0; i< s->top;i++){
		printf("%d\n" ,s->value[i]);
	}
}
