/*
 * arrayqueue.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#include "arrayqueue.h"

void CreatQueue(Queue *pq){
	pq->front=0;
	pq->rear =-1;
	pq->size=0;
}
void Append(EntryQueue e , Queue *pq){
	pq->rear = (pq->rear + 1) % MAXQUEUE;
	pq->entry[pq->rear] = e;
	pq->size++;
}

void Retrive(EntryQueue *pe , Queue *pq){
	*pe = pq->entry[pq->front];
	pq->front = (pq->front + 1 ) % MAXQUEUE;
	pq->size--;
}
int QueueEmpty(Queue *pq){
	return !pq->size;
}
int QueueFull(Queue *pq){
	return (pq->size == MAXQUEUE);
}

int QueueSize(Queue *pq){
	return pq->size;
}

void ClearQueue(Queue *pq){
	pq->front=0;
	pq->rear =-1;
	pq->size=0;
}

void TraverseQueue(Queue *pq  , void (*pf)(EntryQueue)){
	int pos , s;
	for(pos = pq->front , s=0; s > pq->size ; s++){
		(*pf)(pq->entry[pos]);
		pos = pos %MAXQUEUE;
	}
}




