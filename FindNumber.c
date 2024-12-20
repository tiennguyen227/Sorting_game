#include<stdio.h>

#define MAX 7

void Lk4NumInList (int arr[], int number){
    int SumFitFlag = 0;
    int FoundFlag = 0;
    for (int idx = 0; idx < MAX; idx++)
    {
        if (arr[idx] == number)
        {
            FoundFlag = 1;
            printf("Found number %i in position %d of the array \n", number, idx);
        }
        for (int j = MAX - 1; j > idx; j--)
        {
            if ((arr[idx]+arr[j]) <= number)
            {
                SumFitFlag = 1;
                printf("Found sum of the index %d and %d that lower or equal to %i \n", idx, j, number);
            }
        }
    }
    if (FoundFlag == 0)
    {
        printf("There are no value %i in the list.\n", number);
    }
    if (SumFitFlag == 0)
    {
        printf("There are no sum of two index in the list that lower or equal to value %i.\n", number);
    }
}

int main (){
    int arr[MAX] = {-12, 3, 5, 9, 10, 15, 20};
    Lk4NumInList(arr, -12);
    return 0;
}