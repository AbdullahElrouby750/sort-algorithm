#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)			// 0  1  2  3  4  5   6   7  8  9
{												//12,70,78,45,-96,84,-75,100,84,60
	int i, key, j;
	for (i = 1; i < n; i++)						//i = 1
	{
		key = arr[i];							//key = 70			//arr[j] = 0
		j = i - 1;								//j = 0
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int arr[] = { 70,12,78,45,-96,84,-75,100,84,60 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << "unsorted array >> ";
	printArray(arr, N);
	cout << endl;
	insertionSort(arr, N);
	cout << "sorted array >> ";
	printArray(arr, N);
	cin.get();
}
