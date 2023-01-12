STACKS IN C:


![roher (4)](https://user-images.githubusercontent.com/113252231/212075680-5144fe54-f29d-4807-aa72-07f6a5faea38.png)


In this project we get to understand the Array Implementation in Stacks.
TASKS/PROJECTS
I. stack_array.c
FUNCTIONS USED
Push(): function that is responsible of adding items to the stack
Pop(): function that is responsible of deleting Items from the stack

print(): prints all elements that have been pushed to the stack

isFull(): Checks whether the push function stack is full.
	  if it is full, it returns (Stack OverFlow)

isEmpty(): This function Checks whether the Stack is empty.
	   If the stack is empty, it return(stack underflow)

peek(): Returns the Current Item in the stack


Variables Used

stack_arr[MAX]: represents the stack
#define MAX: preprocessor containing the maximum value of array stack_arr[]
int top: index of the values in the array.

II. sin_push_stack
Shows how Singly_linked lists can be used with stacks.

FUNCTIONS USED
1. Global referential structure with a global pointer top
struct node
{
	int data;
	struct node *link;
}*top = NULL;

2. push(): Functions responsible in putting items into stack

3. seek(): Function responsible in printing the top most data 
	   in the stack.

4. print(): function responsible for printing all the data in the
	    stack.
