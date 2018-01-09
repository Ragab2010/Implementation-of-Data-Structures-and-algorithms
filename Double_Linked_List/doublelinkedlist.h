/*
 * linkedlist.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_
#include "stdlib.h"

typedef int Entrylist;

typedef struct listNode{
	Entrylist entry;
	struct listNode *next,*back;
}ListNode;

typedef struct list{
	ListNode *current;
	int currentpos;
	int size;
}List;


/*PROTOTYPE*/
void InsertList(int p , Entrylist e , List *pl);
//void DeletList(int p , Entrylist *pe , List *pl);
int RetriveList( List *pl);
//void ReplaceList(int p , Entrylist e , List *pl);
void TraverseList( List *pl , void (*pf)(Entrylist));
void CreatList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);


#endif /* DOUBLELINKEDLIST_H_ */
