
#include "doublelinkedlist.h"


void InsertList(int pow , Entrylist e , List *pl){
	int i,step;
	ListNode *temp;
	/*prepare the Node*/
	ListNode *pn = (ListNode *)malloc(sizeof(ListNode));
	pn->back =NULL;
	pn->next =NULL;

	pn->entry =e;
	/*add node to begin*/
	if(!pl->current){
		pl->current=pn;
		pl->currentpos=0;
	}
	if(pow>=pl->currentpos){
		for(;pl->currentpos !=pow-1;pl->currentpos++){
			pl->current=pl->current->next;
		}
		pn->back=pl->current;
		pl->current->next=pn;
//		temp=pl->current->next->back;
//		pn->next=pl->current->next;
//		pn->back=temp;
//		pl->current->next->back=pn;
//		pl->current->next=pn;


	}
	else{
		for(;pl->currentpos !=pow-1;pl->currentpos--){
			pl->current=pl->current->back;
		}
	}

		pn->next=pl->current->next;
		pn->back=pl->current->next->back;
		pl->current->next->back=pn;
		pl->current->next=pn;
/*--------------------------------------------------------------*/
		pl->size++;

}
int RetriveList(  List *pl){
	return pl->current->entry;

}
int poo(List *pl){
	return pl->current->entry;
}

void CreatList(List *pl){
	pl->current = NULL;
	pl->currentpos=0;
	pl->size = 0;
}

int ListEmpty(List *pl){
	return !pl->current;
}

int ListSize(List *pl){
	return pl->size;
}


//void TraverseList(List *pl , void (*pf)(Entrylist)){
//	ListNode *pn= pl->current;
//	while(pn){
//		(*pf)(pn->entry);
//		pn->next;
//	}
//}
