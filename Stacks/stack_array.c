#include<stdio.h>
#include<stdlib.h>
//initialize global variables
#define MAX 5
int stack_arr[MAX];
int top = -1;
//Initialize IsFull Function
int isFull()
{
	if (top == MAX -1)
	{
		return 1;
	}
	return 0;
}

//Initialize push function

void push(int data)
{
	if (isFull())
	{
		printf("Stack Overflow\n");
	}
	top = top + 1;
	stack_arr[top] = data;
}

//Initializepeek()

int peek()
{
	return stack_arr[top];
}

//Initialize isEmpty function

int isEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}
//Initialize pop()

int pop()
{
	int value;
	if (isEmpty())
	{
		printf("Stack Underflow\n");
	}
	value = stack_arr[top];
	top = top - 1;
	return value;
}

//Initialize print() function

void print()
{
	int i;
	if (isEmpty())
	{
		printf("Stack Underflow\n");
	}
	for (i = top; i>=0; i--)
	{
		printf("%d\n", stack_arr[i]);
	}
}

//Initialize Main function
int main()
{
	int choice, data;
	while(1)
	{
		printf("WELCOME TO STACK\n");
		printf("1) push\n");
		printf("2) pop\n");
		printf("3) print Current Item on stack\n");
		printf("4) print all items\n");
		printf("5) Quit\n");
		printf("Make A Choice\n");
		scanf("%d", &choice);


		switch (choice)
		{
			case 1:
				printf("Enter Number to push\n");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("The data deleted is %d\n", data);
				break;
			case 3:
				data = peek();
				printf("The current data is %d\n", data);
				break;
			case 4:
				print();
				break;
			case 5:
				printf("Shutting down\n");
				exit(1);
			default:
				printf("Enter a valid number\n");
		}
	}

	return 0;
}





