#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//selfreferential struct
struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

//enqueue adding data

void enqueue(int data)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(front == NULL && rear == NULL)
	{
		front = rear = temp;
	}
	rear->next = temp;
	rear = temp;
	printf("Data entered is %d\n", temp->data);
}
// dequeue delete data
void dequeue()
{
	struct node *temp;
	temp = front;
	if(front == NULL && rear == NULL)
	{
		printf("Queue is already empty\n");
		exit(1);
	}
	printf("Data deleted is %d\n", front->data);
	front = front->next;
	free(temp);
	//temp = NULL;
}
//print all
void print()
{
	struct node *temp;
	if( front == NULL && rear == NULL)
	{
		printf("Queue is already empty\n");
		exit(1);
	}
	temp = front;
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}
//print first data
void seek()
{
	if(front == NULL && rear == NULL)
	{
		printf("Queue is empty\n");
		exit(1);
	}
	printf("The data is %d\n", front->data);
}
//int main
int main()
{
	int choice, num;

	while(true)
	{
		printf("\nWELCOME TO QUEUE\n");
		printf("......................\n");
		printf("1)For Enqueue\n");
		printf("2)For Dequeue\n");
		printf("3)Print ALL\n");
		printf("4)print first data in queue\n");
		printf("5)Exit\n");
		printf("Make a choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter Number to queue\n");
				scanf("%d", &num);
				enqueue(num);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				print();
				break;
			case 4:
				seek();
				break;
			case 5:
				printf("Process done\n");
				printf("Program shutting down\n");
				exit(1);
				break;
			default:
				printf("Enter a valid Number\n");
				break;
		}
	}
	return 0;
}
