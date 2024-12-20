#include<stdio.h>
#include<stdlib.h>

int compare(const void* ele1,const void* ele2)
{
    int Num1 =*(const int*) ele1;
    int Num2 =*(const int*) ele2;
    return Num1 - Num2;
}

void FindElements (int arr[], int number)
{
    qsort(arr, number, sizeof(arr[0]), compare);
    int count = 1;
    int checker;
    for (int index = 1; index <= 3; index++)
    {   
        if(arr[number-index] != checker || count == 1)
        {
             printf("%d\n",arr[number-index]);
        }
        checker = arr[number-index];
        count++;
    }
}

int main()
{
    int arr[] = {-123, 25, 45, 50, 55, 12, 32, 45, 0, 1, 15};
    int num;
    num = sizeof(arr)/sizeof(arr[0]);
    FindElements (arr, num);
}

