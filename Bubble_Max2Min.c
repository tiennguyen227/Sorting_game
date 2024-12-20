#include <stdio.h>

void Bubble_sort(int arr[], int size)
{
    for (int first_idx = 0; first_idx < size; first_idx++)
    {
        for (int second_idx = size - 1; second_idx > first_idx; second_idx--)
        {
            printf("%i\n", arr[second_idx - 1]);
            if(arr[second_idx] > arr[second_idx - 1])
            {
                // Swap without container
                arr[second_idx] = arr[second_idx] + arr[second_idx - 1];
                arr[second_idx - 1] = arr[second_idx] - arr[second_idx - 1];
                arr[second_idx] = arr[second_idx] - arr[second_idx - 1];
            }
            else
            {
                //Do nothing :))
            }
        }
    }
}

int main ()
{
    int arr[] = {1, 123, 45, -152, 58, 355, -355};
    int size = 0;
    size = sizeof(arr)/sizeof(int);
    printf("Before\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("%d ", arr[idx]);
    }
    printf("\n");
    Bubble_sort(arr, size);
    printf("After\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("%d ", arr[idx]);
    }
    printf("\n");
}
