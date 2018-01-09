/*
 * linkedlist.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: RAGAB
 */

#include "linkedlist.h"


/*the sequential searching*/
int SequentialSearch(Entrylist target , List *pl){
	int current,s=ListSize(pl);
	ListNode currententry;
	for(current =0;current < s;current++){
		RetriveList(current , &currententry, pl);
		if(EQ(target , currententry.entry)){
			return 1;
		}
	}
	return -1;
}
/*Insert order for Binary Searching*/
int InsertOrder(Entrylist e , List *pl){
	int current, s=ListSize(pl);
		ListNode currententry;
	for(current =0;current < s;current++){
		RetriveList(current , &currententry, pl);
		if(LT(e.key , currententry.key)){
			break;
		}
		InserList(current , e , pl);
}

int InserList(int pos , Entrylist e , List *pl){
	ListNode *p, *q;
	int i;
	if(p=(ListNode *) malloc(sizeof(ListNode))){
		p->entry =e;
		p->next=NULL;
		if(pos == 0){
			p->next=pl->head;
			pl->head=p;
		}else{
			for(q=pl->head , i=0; i<pos-1; i++){
				q=q->next;
			}
			p->next=q->next;
			q->next=p;

		}
		pl->size++;
		return 1;
	}else{
		return 0;
	}

}

void DeleteList(int pos , Entrylist *pe , List *pl){
	ListNode q , temp;
	int i;

	if(pos ==0){
		*pe=pl->head->entry;
		temp=pl->head->next;
		free(pl->head);
		pl->head=temp;
	}else{
		for(q=pl->head , i=0 ; i<pos-1 ; i++){
		q=q->next;
		}
		*pe=q->next->entry;
		temp=q->next->next;
		free(q->next);
		q->next=temp;
	}
	pl->size--;
}

void RetriveList(int pos , Entrylist *pe , List *pl){
	int i;
	ListNode *q;
	for(q=pl->head , i= 0;i<pos ; i++){
		q=q->next;
	}
	*pe = q->entry;
}

void Replacelist(int pos , Entrylist e , List  *pl){
	int i;
	ListNode *q;
	for(q=pl->head , i=0; i<pos ;i++){
		q=q->next;
	}
	q->entry=e;
}


void CreatList(List *pl){
	pl->head = NULL;
	pl->size = 0;
}

int ListEmpty(List *pl){
	return !pl->head;
}

int ListSize(List *pl){
	return pl->size;
}
int ListFull(List *pl){
	return 0;
}

void DestroyList(List *pl){
	ListNode *pn= pl->head;
	while(pn){
		pn=pn->next;
		free(pl->head);
		pl->head =pn;
	}
	pl->size=0;
}

void TraversList(List *pl , void (*pf)(Entrylist)){
	ListNode *pn= pl->head;
	while(pn){
		(*pf)(pn->entry);
		pn->next;
	}
}
