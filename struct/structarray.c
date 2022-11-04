/**
 * Author: Robert Njoroge
 *
 */                                                                                                                                                             

#include<stdio.h>
#include<stdlib.h>

/**
 * sturct - a simple array struct with details
 * of Rabbits.
 * @name: name of Rabbit
 * @breed: breed of Rabbit
 * @age: age of Rabbit in months
 * @owner: owner of Rabbit
 * @number: Phonenumber of the owner
 * @index: index of the Rabbit                                                                                                                                  
 */                                                                                                                                                             
struct Rabbit                                                                                                                                                   
{                                                                                                                                                               
	char name[20];                                                                                                                                          
	char breed[20];                                                                                                                                         
	char owner[20];                                                                                                                                         
	int age;
	int number;
	int index;
} s[3];
/**
 * main - runs the struct
 * @p: pointer to struct
 *
 * Return: Always 0;
 */
int main(void)
{
	struct Rabbit *p;
	p = &s[3];
	int i;

	p = malloc(sizeof(struct Rabbit));

	printf("Enter Details:");
	for (i = 0; i < 3; i++)
	{
		s[i].index = i + 1;
		printf("For index: %d\n", s[i].index);

		printf("Enter The Rabbit\'s name:");
		scanf("%s", s[i].name);
		printf("Enter the Breed of Rabbit: ");
		scanf("%s", s[i].breed);
		printf("Enter the Name of Owner:");
		scanf("%s", s[i].owner);
		printf("Enter age of Rabbit in Months: ");
		scanf("%d", &s[i].age);
		printf("Enter the phone number of owner:");
		scanf("%10d", &s[i].number);
	}

	for (i = 0; i < 3; i++)
	{
		printf("\nFor Index: %d\n", (i + 1));
		printf("Name: %s\n", s[i].name);
		printf("Breed: %s\n", s[i].breed);
		printf("Owner: %s\n", s[i].owner);
		printf("Age in months %d\n", s[i].age);
		printf("Phone Number of Owner: %010d\n", s[i].number);
	}
	free(p);
	return (0);
}
