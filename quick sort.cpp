
#include <iostream>
using namespace std;
void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void print(int arr[], int size);
int main()
{
	int arr[] = { 70,12,78,45,-96,84,-75,100,84,60 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "\nunsorted array >> ";
	print(arr, size);
	quicksort(arr, 0, size - 1);
	cout << "\n\nsorted array >> ";
	print(arr, size);
	cout << endl;
	cin.get();
}
void quicksort(int arr[], int low, int high)
{
	if (low < high)
	{ 
		int pi = partition(arr, low, high);
	quicksort(arr, low, pi-1);
	quicksort(arr, pi+1,high);
	}
}						//low = 0		high = 9
int partition(int arr[], int low, int high)				//  0  1  2  3   4  5   6  7   8  9
{														// 70,12,78,45,-96,84,-75,100,84,60
	int pivot = arr[high];
	int i = (low - 1);									//pivot = 60
	for (int j = low; j <= high-1; j++)	// to 8			// i = 0
	{													//j = 1
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}