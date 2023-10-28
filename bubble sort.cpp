#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)					//  0  1  2  3   4  5  6   7   8  9
{													//  70,12,78,45,-96,84,-75,100,84,60 
	int i, j;
	for (i = 0; i < n - 1; i++)	//n = 7				//i = 0
	{
		for (j = 0; j < n - i - 1; j++)//n = 8		//j = 0
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int arr[] = { 70,12,78,45,-96,84,-75,100,84,60 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << "Unsorted array: \n";
	printArray(arr, N);
	cout << endl;
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	cin.get();
}
