/*
 * doubly_linkedlist.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef DOUBLY_LINKEDLIST_H_
#define DOUBLY_LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

#define ENTRYTYPE int
typedef struct listnode{
	ENTRYTYPE data;
	struct listnode *next;
	struct listnode *prev;

}ListNode;

typedef struct list{
	struct listnode * head ;
	int size;
}List;


/*------------------------------------------*/
int insertDll(List *pl , int data , int pow){
	ListNode * p , *q , *newlist;
	int i;
	newlist = (ListNode*)malloc(sizeof(ListNode));
	if(!newlist){
		printf("Error cannot allocate list ");
		return 0;
	}else{
		newlist->data = data;
		if(pow == 0){
			newlist->next=pl->head;
			newlist->prev =NULL;
			if(pl->head == NULL){
				pl->head=newlist;
			}else{
				pl->head->prev=newlist;
				pl->head = newlist;
			}
		}else{
			for(p = pl->head , i=0 ; (p) && (i<pow) ; i++){
				q=p;
				p=p->next;
			}
			if(p == NULL){
				newlist->next =NULL;
				newlist->prev =q;
				q->next=newlist;
			}else{
				newlist->next=p;
				newlist->prev =q;
				p->prev=newlist;
				q->next =newlist;

			}
		}
	}

	pl->size++;
	return 1;

}




int deleDll(List *pl , int pow){
	ListNode *temp, *p;
	int i;
	if(pow == 0){
		temp =pl->head;
		pl->head=temp->next;
		free(temp);
	}else{
		for(p=pl->head ,i=0;p&&(i<pow); i++){
			temp=p;
			p=p->next;
		}
		if(p->next == NULL){
			temp->next=NULL;
			free(p);

		}else{
			temp->next = p->next;
			p->next->prev =temp;
			free(p);
		}

	}
	return 1;
	pl->size--;
}

int destroyDll(List *pl){
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

int isDllFull(List *pl){
	return 0;
}

int isDllEmpty(List *pl){
	return !pl->size;
}
void traverseDll(List* pl, void(*Visit)(ENTRYTYPE)){
	ListNode *p=pl->head;
	while(p){
		(*Visit)(p->data);
		p=p->next;
	}
}

int initDll(List *pl){
	pl->head=NULL;
	pl->size=0;
	return 1;
}



#endif /* DOUBLY_LINKEDLIST_H_ */
