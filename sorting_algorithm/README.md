C Program to Implement Bubble Sort

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

What is Bubble Sort?
Bubble sort technique is used to sort an array of values in increasing or decreasing order.


::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

Problem Description
Write a C program to perform the bubble sort.

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

Expected Input and Output
1. Average case (Unsorted array): When the input array has random distribution of numbers.

For example:

If the input array is {4, 6, 1, 2, 5, 3}      
the expected output array will have data as {1, 2, 3, 4, 5, 6}
2. Best case (Sorted Array): When the input array is already sorted, in that case we have to make minimum number of swaps.

For example:If the input array has data as {-3, 31, 66}        
then the expected output array will have data as {-3, 31, 66}
3. Worst Case (Reverse sorted array): When the array is sorted in reverse manner, in that case we have to make maximum number of swaps.

For example:

If the input array has elements as {9, 8, 6, 3, 1}
then the output array will have data as {1, 3, 6, 8, 9}

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;

Bubble Sort Algorithm
1. In Bubble sort algorithm we compare the first two elements of an array and swap them if required.
2. If we want to sort the elements of array in ascending order and if the first element is greater than second then, we need to swap the elements.
3. If the first element is smaller than second, we don’t need to swap the elements. This process go on until last and second last element is compared and swapped.

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

Bubble Sort Example:

If we have the array as {20,10,40,50,30}
and we apply bubble sort to sort the array,
then the resultant array after each iteration will be as follows:

               Original array: {20, 10, 40, 50, 30}

Array after first iteration          10  ->   20   ->   40   ->   30   ->   50
Array after second iteration         10  ->   20   ->   30   ->   40   ->   50
               Sorted array is  10  20  30  40  50

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
