#include <iostream>
using namespace std;

template <typename T>
void BubbleSort (T arr[], int n)
{
    for (int i = (n-1); i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}

int main (){
    char arr_num[7] = {'a', 'b', 'G', 'y', 'p', 'q', 'V'};
    BubbleSort<char> (arr_num, 7);
    for (int idx = 0; idx < 7; idx++)
    {
        cout<<"Character "<<idx<<": "<<arr_num[idx]<<endl;
    }
    return 0;
    }