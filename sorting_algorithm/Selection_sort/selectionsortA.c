#include<stdio.h>

int main()
{
    //initialize the size of array
    int n = 5;
    //initialize array
    int array[] = {2,3,1,4,5};
    //initialize min value
    int min_value;
    //initialize iterative variables
    int i, j;

    //initialize first for loop to give min_value the first element of the array
    for(i = 0; i < n -1; i++)
    {
        min_value = i;
        //iterate the second for loop that looks for the minimum number
        for(j = i+ 1; j < n; j++)
        {
            if(array[min_value] > array[j])
            {
                min_value = j;
            }
        }
        if(min_value != i)
        {
            //then swap the numbers
            int temp = array[i];
            array[i] = array[min_value];
            array[min_value] = temp;
        }
    }
    //now we can print sorted array
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
