#include<stdio.h>

#define MAX_ACCEPTEDARR 100

int Second_Max (int arr[], int NumberOfElement)
{
    int Max_max = arr[0];
    int index_max = 0;
    int Second_max = 0;
    for (int i = 1; i < NumberOfElement; i++)
    {
        if (Max_max < arr[i])
        {
            Max_max = arr[i];
            index_max = i;
        }
    }
    Second_max = arr[NumberOfElement-index_max-1];
    for (int j = 0; j < NumberOfElement; j++)
    {
        if (Second_max < arr[j] && arr[j] < Max_max)
        {
            Second_max = arr[j];
        }
    }
    return Second_max;
}

int main (){
    int arr[MAX_ACCEPTEDARR];
    int num;
    int second_max;
    
    printf ("Type in the number of input elements\n");
    scanf ("%d", &num);

    while (num > MAX_ACCEPTEDARR || num <= 0)
    {
        printf ("Pls type in the number of input elements again\n");
        scanf ("%d", &num);
    }

    printf ("Please type in each element of the list\n");
    for (int index = 0; index < num; index++)
    {
        scanf ("%d", &arr[index]);
    }
    
    second_max = Second_Max (arr, num);
    printf ("The second max in this list is: %d\n", second_max);
    for (int index = 0; index < num; index++)
    {
        printf("Position %d: %i\n", index, arr[index]);
    }

}
