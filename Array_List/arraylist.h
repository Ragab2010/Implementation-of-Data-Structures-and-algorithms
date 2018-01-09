/*
 * arraylist.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#define MAXLIST 10
/*********************************************************/
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
/*********************************************************/
typedef int Entrylist;

typedef struct list{
	Entrylist entry[MAXLIST];
	int size;
}List;

/*PROTOTYPE*/
int Binary2Search(Entrylist target , List *pl);
int RecBinary2Search(Entrylist target ,int bottom , int top , List *pl);
void InsertList(int p , Entrylist e , List *pl);
void DeletList(int p , Entrylist *pe , List *pl);
void RetriveList( int p , Entrylist *pe , List *pl);
void ReplaceList(int p , Entrylist e , List *pl);
void TraverseList( List *pl , void (*pf)(Entrylist));
void CreatList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);


#endif /* ARRAYLIST_H_ */
