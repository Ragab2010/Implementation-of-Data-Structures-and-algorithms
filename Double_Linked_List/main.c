/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */


#include "doublelinkedlist.h"

void displayStack(Entrylist e){
	printf("%d \n" , e);
}

int main(){

	List s;
	CreatList(&s);
	InsertList(0,1,&s);

	printf("the current pos is %d" , poo(&s));
	printf("\nthe current entry is %d" , RetriveList(&s));

	return 0;
}

