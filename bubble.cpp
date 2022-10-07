#include<iostream>
using namespace std;
void bubble(int arr[] , int s)
{
    for(int i=0 ; i<s - 1 ; i++)
    {
        for(int j = 0 ; j < s-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
void swap(int x , int y)
{
    int temp;
    temp = x ;
    x = y;
    y = temp;
}
void printAll(int arr[] , int s)
{
    cout<<"The Sorted Array (Bubble Sort) is : ";
    for(int i=0 ; i<s ; i++)
    {
        cout<<arr[i]<<"\t";
    }
        cout<<endl;
}
int main(){
    int arr[] = {12 , 98 , 45 , 100 , 23 , 420 , 544 , 578 , 500 , 1002};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr , size);
    printAll(arr, size);
    return 0;
}