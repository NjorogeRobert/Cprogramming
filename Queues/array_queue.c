#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 10 //the maximum amount to be used with array
int arr[MAX];
int front = -1, rear = -1;//rear & front are used to add and delete data

/**
  * enqueue: adds data in a queue
  * front: argument that determines the beggining of queue
  * rear: arg that adds data to a queue.
  * arr[]: array
  *data: data entered
  */

void enqueue(int data)
{
	if(rear == MAX -1)
	{
		printf("Queue is Full\n");
		exit(1);
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		arr[rear] = data;
	}
	else
	{
		rear = rear + 1; //rear++
		arr[rear] = data;

		printf("Entered data %d\n", arr[rear]);
	}
}

/**
  * dequeue: removes or deletes data from queue
  * front: argument
  * rear: argument
  * arr: arra argument
  */

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is already empty\n");
		exit(1);
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		printf("The data deleted is %d\n", arr[front]);
		front = front + 1; //front++
	}
}
/**
  * Display: displays all the data in queue
  * i: Int var
  * front: variable
  * rear: variable
  */
void display()
{
	int i;
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		exit(1);
	}
	printf("The data is: \n");
	for(i = front; i <= rear; i++)
	{
		printf("%d\n", arr[i]);
	}
}

/**
  * seek: prints the top most data
  * front: variable
  */

void seek()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is already empty\n)");
		exit(1);
	}
	printf("The data is %d\n", arr[front]);
}

/**
  * main: executes code.
  */

int main()
{
	int choice, num;
	while(true)
	{
		printf("\n");
		printf("1) For enqueue\n");
		printf("2) For dequeue\n");
		printf("3) For Dispaly\n");
		printf("4) For First data on queue\n");
		printf("5) Exit\n");
		printf("Make a choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter data in queue\n");
				scanf("%d", &num);
				enqueue(num);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				seek();
				break;
			case 5:
				printf("Done\n");
				exit(1);
			default:
				printf("Please Enter a valid number\n");
				break;
		}
	}
	return 0;
}
