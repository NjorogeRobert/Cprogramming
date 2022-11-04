/**
 * Author: Robert Njoroge Maina
 */

#include<stdio.h>

/**
 * main -program that use switch case in creating
 * a simple calculator
 *
 * Description: create a simple calculator
 * Return: Always 0
 */

int main(void)
{
	int value;
	int num;
	char operator;

	printf("Enter calculation.\n");
	scanf("%d %c %d", &value, &operator, &num);

	switch (operator)
	{
		case '+':
			printf("The answer is: %d\n", (value + num));
			break;
		case '-':
			printf("The answer is: %d\n", (value - num));
			break;
		case '*':
			printf("The answer is: %d\n", (value * num));
			break;
		case '/':
			if (num == 0)
			{
				printf("The number has been divided by zero.\n");
			}
			else
			{
				printf("The answer is: %d\n", (value / num));
			}
			break;
		default:
			printf("Unknown Operator");
			break;
	}
	return (0);
}
