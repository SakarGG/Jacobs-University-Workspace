/*
CH-230-A
a8 p8.3[c]
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
	return pq->items == 0;
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

	/*Set current rear node’s next pointer 
	to new node if queue already exists*/
	if(pq -> rear != NULL){

		pq -> rear -> next = node1;

	}

	//Set rear pointer to new node.
	pq -> rear = node1;

	//Set front node if queue was empty.
	if(pq -> front == NULL){

		pq -> front = node1;

	}

	//Add 1 to item count.
	pq -> items++;

	return 0;

}


int dequeue(Item *pitem, Queue *pq)
{	

	//Check if the queue is empty.
	if(queue_is_empty(pq)){

		printf("Nothing to delete!");
		return -1;

	}

	Node * node1;

	//Copy item to waiting variable
    int firstElem = pq -> front -> item;

	//Point to the first element as it is first out.
    node1 = pq -> front;

	//Reset front pointer to the next item in queue.
    pq -> front = pq -> front -> next;

	//Decrement item count.
	pq -> items--;

	//Free memory.
	free(node1);

	//To show which element was deleted in the CMD.
	return firstElem;

}

void printqueue(Queue *pq){
	
	Node* node1;

	/*Point to the first element 
	as it is first out in printing.*/
	node1 = pq -> front;

	//Until the end of queue.
	while(node1 != NULL){

		//Print the element at the current position.
		printf("%d ", node1 -> item);

		//Move along the queue one by one.
		node1 = node1 -> next;

	}

	printf("\n");

}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}