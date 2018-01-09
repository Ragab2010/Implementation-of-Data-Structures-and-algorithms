/*
 * linkedqueue.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef LINKEDQUEUE_H_
#define LINKEDQUEUE_H_
#include "stdlib.h"
typedef int  EntryQueue;

typedef struct queueNode{
	EntryQueue entry;
	struct queueNode * next;
}QueueNode;

typedef struct queue{
	QueueNode* front;
	QueueNode* rear;
	int size;
}Queue;


/*PROTO TYPE*/

void CreatQueue();
void Append(EntryQueue e , Queue *pq);
void Retrive(EntryQueue *pe , Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq  , void (*pf)(EntryQueue));
#endif /* LINKEDQUEUE_H_ */
