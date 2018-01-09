/*
 * arrayqueue.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef ARRAYQUEUE_H_
#define ARRAYQUEUE_H_

#define MAXQUEUE 10
typedef int EntryQueue;

typedef struct queue{
	int front;
	int rear;
	int size;
	EntryQueue entry[MAXQUEUE];
}Queue;


/*PROTOTYPE*/
void CreatQueue();
void Append(EntryQueue e , Queue *pq);
void Retrive(EntryQueue *pe , Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq  , void (*pf)(EntryQueue));
#endif /* ARRAYQUEUE_H_ */
