#include<stdio.h>
//here we are using select sorting algorithm with for loop where we compare the two elements in the for loop

int main()
{
    int n = 5; //length of array
    int arr[] = {1,4,3,2,5};// unsorted array
    int i, j; //iteration variables
    //initialize first loop
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                //then swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //print the sorted array
    printf("Sorted Array\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
