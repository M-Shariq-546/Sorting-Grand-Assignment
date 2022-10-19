#include<iostream>
using namespace std;
void heapify(int arr[] , int N , int i)
{
    int large = i;

    int left = 2 * i + 1;

    int right = 2 * i + 2;

    if(left<N && arr[left] > arr[large])
        large = left;

    if(right<N && arr[right] > arr[large])
        large = right;

    if(large != i)
    {
        swap(arr[i] , arr[large]);

        heapify(arr , N , large);
    }

}
void swap(int x , int y)
{

}
void heapSort(int arr[] , int N)
{
    for(int i = N/2-1; i>=0; i--)
    {
        heapify(arr , N , i);
    }
    for(int i=N-1 ; i>=0 ; i--)
    {
        swap(arr[0] , arr[i]);

        heapify(arr , N , 0);
    }
}
void print(int arr[] , int N)
{
    for(int i=0; i<N ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
int main()
{
    int arr[] ={5 , 4 , 6 , 0 , 4 , 5 , 2 , 2 , 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr , size);


    print(arr , size);

    return 0;
}
