/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: RAGAB
 */


#include <stdio.h>
#include "hashtable_liner.h"


int main(){

	HashTable  t;
	 creat(&t , 20);
	 insert( &t , 60);
	 insert( &t , 70);
	insert( &t , 80);

	printf("fine=%d" , find(&t , 20));

	return 0;
}
