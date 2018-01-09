/*
 * arraylist.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */
#include "arraylist.h"
/*binary Search*/
int Binary2Search(Entrylist target , List *pl){
	int bottom=0 , middle ,top=ListSize(pl);
	while(bottom<=top){
		middle =(bottom + top)/2;
		if(EQ(target , pl->entry[middle]))
			return middle;
		if(LT(target , pl->entry[middle]))
			top=middle - 1;
		else
			bottom =middle + 1;

	}
	return -1;
}
/*recursive binary searching*/
int RecBinary2Search(Entrylist target ,int bottom , int top , List *pl){
	int middle ;
	bottom=0 ,top=ListSize(pl);
	if(bottom<=top){
		middle =(bottom + top)/2;
		if(EQ(target , pl->entry[middle]))
			return middle;
		if(LT(target , pl->entry[middle]))
			RecBinary2Search( target , bottom , middle -1  ,pl);
		else
			RecBinary2Search( target , middle + 1 ,top ,pl);

	}
	return -1;
}

void InsertList(int p , Entrylist e , List *pl){
/*pre : 0< p < size */
	int i;
	for(i=pl->size-1;i>=p;i--){
		pl->entry[i+1]=pl->entry[i];
	}
	pl->entry[p]=e;
	pl->size++;
}

void DeletList(int p , Entrylist *pe , List *pl){
/*pre : 0< p < size-1 */
	int i;
	*pe = pl->entry[p];
	for(i=p; i < pl->size ;i++ ){
		pl->entry[i] =pl->entry[i+1];
	}
	pl->size--;

}

void RetriveList( int p , Entrylist *pe , List *pl){
	*pe = pl->entry[p];
}

void ReplaceList(int p , Entrylist e , List *pl){
	pl->entry[p] =e;
}

void TraverseList( List *pl , void (*pf)(Entrylist)){
	int i;
	for( i =0 ; i<pl->size ; i++){
		(*pf)(pl->entry[i]);
	}
}

int ListSize(List *pl){
	return pl->size;
}

void CreatList(List *pl){
	pl->size = 0;
}

int ListEmpty(List *pl){
	return !pl->size;
}
int ListFull(List *pl){
	return pl->size == MAXLIST;
}

