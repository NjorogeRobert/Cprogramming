#include<stdio.h>
#include<stdarg.h>
//variadic function

int variadic(int args, ...)
{
    va_list(lists);
    va_start(lists, args);
    int max = va_arg(lists, int);
    for(int i = 0; i < args-1; i++)
    {
        int temp = va_arg(lists, int);
        if(max < temp)
        {
            max = temp;
        }
    }
    va_end(lists);
    return max;
}
int main()
{
    int arr = variadic(5, 1,2,3,4,5);
    printf("The largest number is: %d\n", arr);
    return 0;
}
