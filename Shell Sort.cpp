// Shell Sort in C++ programming

#include <iostream>
using namespace std;

// Shell sort
void shellSort(int arr[], int s) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = s / 2; interval > 0; interval /= 2)
  {
    for (int i = interval; i < s; i++)
    {
      int temp = arr[i];
      int j;
      for (j = i; j >= interval && arr[j - interval] > temp; j -= interval)
      {
        arr[j] = arr[j - interval];
      }
      arr[j] = temp;
    }
  }
}

// Print an array
void printArray(int arr[], int s) {
  int i;
  for (i = 0; i < s; i++)
    cout << arr[i] << " ";
  cout << endl;
}
// Driver code
int main() {
  int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  shellSort(arr, size);
  cout << "Sorted array: \n";
  printArray(arr, size);
}