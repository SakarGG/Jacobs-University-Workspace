/*
CH-230-A
a8 p8.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{

	//If queue is full do not do anything.
	if(queue_is_full(pq) == 1){

		puts("Queue is full");
		return -1;

	}

	//Create a new node.
	//DMA
	Node * node1 = malloc(sizeof(Node));

	//Check if DMA failed.
	if(node1 == NULL){

		printf("Memory could not be allocated");
		exit(0);
	}

	//Copy item to the node
	node1 -> item = item;

	//Set next pointer to NULL.
	node1 -> next = NULL;

	//Set front node if queue was empty.
	if(pq -> front == NULL){

		pq -> front = node1;

	}

	/*Set current rear node’s next pointer 
	to new node if queue already exists*/
	pq -> rear = node1;

	//Set rear pointer to new node
	if(pq -> rear != NULL){

		pq -> rear -> next = node1;

	}

	//Add 1 to item count.
	pq -> items++;

	return 0;

}


int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}