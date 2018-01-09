/*
 * linkedlist.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "stdlib.h"

/*define for compare all type of Data by sequential Search*/
#define EQ(a, b) ((a)==(b))
#define LT(a, b) ((a)<(b))
#define LE(a, b) ((a)<=(b))
#define GT(a, b) ((a)>(b))
#define GE(a, b) ((a)>=(b))
//#define EQ(a, b) (!strcmp((a), (b)))
//#define LT(a, b) (strcmp((a), (b))<0)
//#define LE(a, b) (strcmp((a), (b))<=0)
//#define GT(a, b) (strcmp((a), (b))>0)
//#define GE(a, b) (strcmp((a), (b))>=0)


typedef struct entrylist{
	int val;
	int key;
}Entrylist;
typedef struct listNode{
	Entrylist entry;
	struct listNode *next;
	int key;
}ListNode;

typedef struct list{
	ListNode *head;
	int size;
}List;


/*PROTOTYPE*/
void InsertList(int p , Entrylist e , List *pl);
void DeletList(int p , Entrylist *pe , List *pl);
void RetriveList( int p , Entrylist *pe , List *pl);
void ReplaceList(int p , Entrylist e , List *pl);
void TraverseList( List *pl , void (*pf)(Entrylist));
void CreatList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);


#endif /* LINKEDLIST_H_ */
