#include<iostream>
using namespace std;
void selection(int arr[] , int s)
{
    int min;
    for(int i=0 ; i<s-1 ; i++)
    {
        min = i;
        for(int j = i+1 ; j<s ; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void printAll(int arr[] , int s)
{
    cout<<"The Sorted Array (Selection Sort) is : ";
    for(int i=0 ; i<s ; i++)
    {
        cout<<arr[i]<<"\t";
    }
        cout<<endl;
}
int main(){
    int arr[] = {5 , 4 , 6 , 0 , 4 , 5 , 2 , 2 , 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr , size);
    printAll(arr, size);
    return 0;
}
