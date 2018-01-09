/*
 * signaly_linkedlist.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef SIGNALY_LINKEDLIST_H_
#define SIGNALY_LINKEDLIST_H_
/*-----------singly linkedlist-----------*/
#include <stdio.h>
#include <stdlib.h>

#define ENTRYTYPE int

typedef struct listnode{
	ENTRYTYPE data;
	struct listnode *next;
}ListNode;

typedef struct list{
	ListNode *head;
	int size;
}List;
/*---------------------------------------*/
int insertLinkedList(List *pl , ENTRYTYPE data , int pow){
	ListNode *p ,*q;
	int i=0;
	ListNode *newList = (ListNode *)malloc(sizeof(ListNode) *1);
	newList->data =data;
	if(pow == 0){
			newList ->next = pl->head;
			pl->head = newList;
		}else{
			for(p = pl->head;(p)&&(i<pow-1);i++){
				q=p;
				p=p->next;
			}
			if(p==NULL){
				printf("the position not exist\n");
				newList->next =p;
				q->next =newList;
			}else{
				newList->next = p->next;
				p->next = newList;
			}
		}
	pl->size++;
	return 1;
}


int deleLinkedList(List *pl , int pow){
	ListNode *temp, *p;
	int i;
	if(pow == 0){
		temp =pl->head;
		pl->head=temp->next;
		free(temp);
	}else{
		for(p=pl->head ,i=0;(p)&&(i<pow); i++){
			temp=p;
			p=p->next;
		}
		if(p == NULL){
			printf("the position not exist\n");
			return 0;
		}else{
			temp->next =p->next;
			free(p);
		}

	}
	pl->size--;
	return 1;

}

int destroyLinkedList(List *pl){
	ListNode *temp ,*p;
		p=pl->head;
	while(p){
		temp = p;
		p=temp->next;
		free(temp);
		temp = p;
	}
	pl->head =NULL;
	pl->size=0;
	return 1;
}

int isLinkedListFull(List *pl){
	return 0;
}

int isLinkedListiEmpty(List *pl){
	return !pl->size;
}
void traverseLinkedList(List* pl, void(*Visit)(ENTRYTYPE)){
	ListNode *p=pl->head;
	while(p){
		(*Visit)(p->data);
		p=p->next;
	}
}

int initlinkedList(List *pl){
	pl->head=NULL;
	pl->size=0;
	return 1;
}





#endif /* SIGNALY_LINKEDLIST_H_ */
