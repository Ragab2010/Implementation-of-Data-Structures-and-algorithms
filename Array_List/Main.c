/*
 * Main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */


#include "arraylist.h"

void display(Entrylist e){
	printf("%d\n", e);
}

int main(){

	List l;
	CreatList(&l);
	InsertList(0 , 5 , &l);
	InsertList(1 , 7 , &l);
	InsertList(0 , 8 , &l);
	InsertList(2 , 4 , &l);
	printf("the size of the List is:%d " ,ListSize(&l) );
	int c;
	DeletList(2, c , &l);
	printf("\nthe size of the List is:%d " ,ListSize(&l) );
	TraverseList(&l ,display);

	return 0;
}
