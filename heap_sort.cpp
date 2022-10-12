// C++ program for implementation of Heap Sort

#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
	int largest = i; // Initialize largest as root
	int left = 2 * i + 1; // Left value
    int right = 2 * i + 2; //Right value
	if (left < N && arr[left] > arr[largest]) // largest left case
		largest = left;

	if (right < N && arr[right] > arr[largest])//largest right case
		largest = right;

	if (largest != i)//Not the root value
    {
		swap(arr[i], arr[largest]);
		heapify(arr, N, largest);//heapify recursion
	}
}
void heapSort(int arr[], int N)
{
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (int i = N - 1; i > 0; i--)
    {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int N)
{
    cout<<"The Sorted Array (Heap Sort) is : ";
	for (int i = 0; i < N; ++i)
		cout << arr[i] << "\t";
	cout << endl;
}
int main()
{
	int arr[] = {5 , 4 , 6 , 0 , 4 , 5 , 2 , 2 , 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, size);
	printArray(arr, size);
    return 0;
}
