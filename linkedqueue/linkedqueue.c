/*
 * linkedqueue.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: RAGAB
 */

#include "linkedqueue.h"
void CreatQueue(Queue *pq){
	pq->front =NULL;
	pq->rear = NULL;
	pq->size = 0;
}
void Append(EntryQueue e , Queue *pq){
	QueueNode *pn = (QueueNode *) malloc(sizeof(QueueNode));
	pn->next = NULL;
	if(!pq->rear){
		pq->front=pn;
	}else{
		pq->rear->next=pn;
	}
	pq->rear = pn;
	pq->size++;
}

void Retrive(EntryQueue *pe , Queue *pq){
	QueueNode *pn;
	*pe=pq->front->entry;
	pn = pq->front;
	pq->front=pn->next;
		free(pn);
	if(!pn->next){
		pq->rear=NULL;
	}
	pq->size--;
}

int QueueEmpty(Queue *pq){
	return !pq->front;
}

int QueueFull(Queue *pq){
	return 0;
}

int QueueSize(Queue *pq){
	return pq->size;
}

void clearQueue(Queue *pq){
	QueueNode *pn;

	while(pq->front){
		pn=pq->front;
		pq=pn->next;
		free(pn);
	}
	pq->size=0;
}

void TraverseQueue(Queue *pq , void (*pf)(EntryQueue)){
	QueueNode *pn;
	for(pn=pq->front;pn;pn->next){
		(*pf)(pn->entry);
	}

}

