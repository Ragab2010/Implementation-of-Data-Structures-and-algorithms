/*
 * linkedlist.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#include <stdio.h>
#include "doubly_linkedlist.h"

void print(ENTRYTYPE data){
	printf("%d\n" , data);
}

int main(){

	List a;
	initDll(&a);
	int x=insertDll(&a ,5 , 0);
	insertDll(&a ,6 , 1);
	insertDll(&a ,7 , 2);
	insertDll(&a ,8 , 3);
	traverseDll(&a , print);
	deleDll(&a , 2);
	traverseDll(&a , print);
	printf("is the list empty = %d\n" ,isDllEmpty(&a));
	destroyDll(&a);
	printf("is the list empty = %d\n" ,isDllEmpty(&a));
	traverseDll(&a , print);
	return 0;
}
