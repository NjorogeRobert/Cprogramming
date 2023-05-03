#include<stdio.h>
#define MAX 10
//FIRST GET THE SWAPPING
void swapping(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//BUBBLESORT
void sortbubble(int arr[], int size)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j <(size -i -1); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swapping(&arr[j], &arr[j + 1]);
            }
        }
    }
}
//main function
int main()
{
    int arr[MAX], num, i;
    printf("ENTER DATA IN ARRAY\n");
    printf("..........................\n");
    printf("What is the size of your array\n");
    scanf("%d", &num);
    printf("Enter Array elements\n");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nBEFORE SORTING\n");
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAFTER SORTING\n");
    sortbubble(arr, num);
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}
