//Code of Insertion Sort
#include<iostream>
using namespace std;
//Insertion Code
void insertion(int arr[] , int s)
{
    for(int i=1 ; i<s; i++)
    {
        int val = arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>val)
        {
            arr[j+1]  = arr[j];
            j--;
        }
        arr[j+1] = val;
    }
}
//Printing complete array code
void printFinal(int arr[] , int d)
{
    cout<<"The Sorted Array (Insertion Sort) is : ";
    for(int i=0 ; i<d ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {5 , 4 , 6 , 0 , 4 , 5 , 2 , 2 , 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion(arr , size);
    printFinal(arr , size);
    return 0;
}
