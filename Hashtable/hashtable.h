/*
 * hashtable.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include <stdio.h>
#include <stdlib.h>

//the load factor



#define LOAD_FACTOR 20

//this is Hashtable with collision resolution technique
//typedef  int EntryType;

/*this is list node for chaining collision */
typedef struct listnode{
	int key ;
	int value;
	struct listnode *next;
}Listnode;

/*this is the hashtable element or palce that's in array*/
typedef struct hashtablenode{
	int bcount; // number of element in block (number of linked node chain)
	 struct listnode *head_block;
}HashTableNode;

/*-this head of the table-*/

typedef struct hashtable{
	int size;
	int count;
	struct hashtablenode **head_table;
}HashTable;

int creatHashTable(struct hashtable * ps , int size ){
	HashTable *ptemp;
	ptemp= (HashTable *)malloc(sizeof(HashTable));
	if(ptemp){
		ptemp->size =(size/LOAD_FACTOR);//20
		ptemp->count = 0;
		ptemp->head_table = (HashTableNode**) malloc(sizeof(HashTableNode* ) * ptemp->size);

		if(ptemp->head_table){
			int i;
			for(i=0 ; i < ptemp->size ; i++){
				ptemp->head_table[i] =(HashTableNode *) malloc(sizeof(HashTableNode));
				ptemp->head_table[i]->bcount=i;
				ptemp->head_table[i]->head_block =NULL;
			}
			printf("%d" , ptemp->head_table[10]->head_block);
//			for(i=0 ; i < ptemp->size ; i++){
//				printf("%d\n" , ptemp->head_table[i]->bcount);
//			}


		}else{
			return 0;
		}
	}else{
		return 0;
	}
	ps =ptemp;
	return 1;
}

int insert(struct hashtable  *ps , int data ){
	int hash_index = data % (ps->size);
	Listnode *pn = (Listnode *)malloc(sizeof(Listnode)  );
	//HashTableNode *temp =ps->head_table;
	if(pn){
		pn->value = data;
		pn->key = hash_index;
		printf("%d\n" , hash_index);
		//pn->next =ps->head_table[10]->head_block;
		printf("%d" , ps->head_table[10]->head_block);
		//ps->head_table[10]->head_block= pn;

	}else{
		return 0;
	}
	return 1;
}

//int search(HashTable * ps , int data ,int *pdata){
//	int hash_index = data % ps->size;
//	//lis(ps->head_table + hash_index)
//	return 1;
//}



#endif /* HASHTABLE_H_ */
