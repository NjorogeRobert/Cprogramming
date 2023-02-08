QUEUES(LAST IN LAST OUT)

This project explains:
1)The array implementation of Queues.
2)The implemntation of Queues with Linked lists.

Task 1
Array Implementation of Queues

In this project we have the front variable and rear variable.
This two variables help in Implementing the queue.

void enquque: responsible for adding data in queue.
void dequeue: responsible for deleting data from queue.
void print: prints all data in queue.
void seek: prints the first data entered in queue.


Task2
Linked lists with queues
In this project we use both the front and rear pointers to delete(dequeue) and add(enqueue) data in the queues.
Self refferential struct is used.
struct node
{
	int data;
	struct node *next;
}
struct node *front;
struct node *rear;

void enqueue: responsible for adding data in queue
void dequeue: responsible for deleting data in queue.
void print: responsible for printing data in queue.
void seek: prints the first dat in queue.
