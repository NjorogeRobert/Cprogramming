//Initialize the header files needed
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// initialize global structure node and global pointer top

struct node
{
	int data;
	struct node *link;
}*top = NULL;

//Initialize push function

void push(int data)
{
	struct node *temp;
	temp =(struct node*) malloc (sizeof(struct node));
	//check if stack is full
	if(temp == NULL)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	//to get the data
	temp->data = data;
	temp->link = NULL;
	temp->link = top;
	top = temp;
	//return top;
}
//deletes data in stack
int pop()
{
	int var;
	struct node *temp;
	temp = top;
	if(top == NULL)
	{
		printf("Stack is already empty\n");
		exit(1);
	}
	var = temp->data;
	top = top->link;
	free(temp);
	temp = NULL;
	return var;
}

void seek()
{
	printf("The top most data in stack is %d\n", top->data);
}
	
void print()
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp = top;
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->link;
	}
}
int main()
{
	int num, choice;
	while(true)
	{
		printf("Welkcome to push stack\n");
		printf(".......................\n");
		printf("\nMake a choice\n");
		printf("1) Push\n");
		printf("2) print all\n");
		printf("3) print top most data\n");
		printf("4) Pop\n");
		printf("5) Quit\n");
		scanf("%d", &choice);


		//use switch case to choose what to do

		switch(choice)
		{
			case 1:
				printf("Enter the number to push\n");
				scanf("%d", &num);
				push(num);
				break;
			case 2:
				printf("The data in the stack\n");
				print();
				break;
			case 3:
				seek();
				break;
			case 4:
				num = pop();
				printf("The data deleted is %d\n", num);
				break;
			case 5:
				printf("Shutting down\n");
				exit(1);
				break;
			default:
				printf("Enter a valid number\n");
		}
	}
	return (0);
}
