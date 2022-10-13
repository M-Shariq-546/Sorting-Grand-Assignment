#include<iostream>
using namespace std;
void count(int arr[] , int s)
{
    int out[10];
    int newarr[10];
    //Assuming the largest value at start
    int largest = arr[0];


    //For finding the largest
    for(int i=1 ; i<s; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    //New array Initializing
    for(int i=0 ; i<=largest ; i++)
    {
        newarr[i] = 0;
    }

    //Storing the numbers in index
    for(int i=0 ; i<s ; i++)
    {
        newarr[arr[i]]++;
    }

    //Sum of previous and current index counts
    for(int i=1 ; i<=largest ; i++)
    {
        newarr[i] += newarr[i-1];
    }

    //finding the best position of elements
    for (int i = s - 1; i >= 0; i--) 
    {
        out[newarr[arr[i]] - 1] = arr[i];
        newarr[arr[i]]--;
    }

    //Final placememt
    for(int i=0 ; i<s ; i++)
    {
        arr[i] = out[i];
    }
}

void printArr(int arr[] , int s)
{
    for(int i=0 ; i<s ; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int array[] = {5 , 4, 6, 0, 4, 5, 2, 2 , 6};
    int size = sizeof(array) / sizeof(array[0]);
    count(array, size);
    printArr(array, size);
    return 0;
}