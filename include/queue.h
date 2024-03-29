#ifndef QUEUE_INCLUDED
#define QUEUE_INCLUDED

#include "processes.h"

typedef struct queue {

	node* next;
	node* prev;// queues are weird, we never use this in processes.c 
			   // however, it simplifies queue.c

} queue;

node* 	create_node		(instruction_* process);
queue* 	create_queue	();
node* 	dequeue			(queue* q);
void 	enqueue			(queue* q, node* n);
void 	enqueue_arrival	(queue* q, node* n);
void 	enqueue_burst	(queue* q, node* n);

#endif
