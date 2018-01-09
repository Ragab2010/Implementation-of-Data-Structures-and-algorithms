/*
 * hashtable_liner.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef HASHTABLE_LINER_H_
#define HASHTABLE_LINER_H_
#include <stdio.h>
#include <stdlib.h>

#define LOAD_FACTOR 1

typedef struct hashtablenode{
	int value;
	int data;
}HashTableNode;


typedef struct hashtable{
	int size;
	int count;
	HashTableNode * head;
}HashTable;


int creat(HashTable *ps, int psize){

		ps->size = (psize/LOAD_FACTOR);
		ps->count=0;
		ps->head = ( HashTableNode*)malloc( sizeof(HashTableNode) * ps->size);
		if(ps->head){
			int i;
			for(i=0 ; i < ps->size ;i++){
				ps->head[i].data=0;
				ps->head[i].value=0;
				//printf("%d\t%d\n"  ,ps->head[i].data , i );
			}
			//printf("the size is :%d" , ps->size);
		}else{
			return 0;
		}

	return 1;
}

int hash(HashTable *ps , int data){

	return (data % ps->size);
}


int insert(HashTable *ps , int data){
	int hash_index = hash(ps , data);
	printf("%d\n" , hash_index);
		while(ps->head[hash_index].data ==0){
			if(ps->head[hash_index].data ==0){
				ps->head[hash_index].data = data;
				ps->head[hash_index].value = hash_index;
			}else{
				hash_index = (hash_index + 1)% ps->size;
			}
		}


	return 1;
}

int find(HashTable *ps , int data){
	int hash_index = hash(ps , data);
//		while(1){
//			if(ps->head[hash_index].data ==data){
//				return hash_index;
//			}else{
//				hash_index = (hash_index + 1)% ps->size;
//			}
//		}
	return hash_index;

}











#endif /* HASHTABLE_LINER_H_ */
