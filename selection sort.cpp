#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)             //  0  1  2  3  4   5   6   7  8  9
{                                                // 70,12,78,45,-96,84,-75,100,84,60
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)                  //i = 0
    {
        min_idx = i;                             //min idx = 0
        for (j = i + 1; j < n; j++)              //j = 1
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = { 70,12,78,45,-96,84,-75,100,84,60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "ARRAY BEFOR SELECTION SORT:";
    cout << endl;
    print(arr, n);
    cout << endl;
    selectionSort(arr, n);
    cout << "ARRAY AFTER SELECTION SORT:";
    cout << endl;
    print(arr, n);
    cin.get();
}