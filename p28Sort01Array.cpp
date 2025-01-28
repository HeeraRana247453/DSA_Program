 /* 
Problem statement:-
    You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list.
    Think of a solution which scans the array/list only once and don't require use of an extra array/list.
Note:
    You need to change in the given array/list itself. Hence, no need to return or print anything. 
 */


#include<iostream>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high)
    {
        if(input[mid]==0)
            swap(input[low++],input[mid++]);
        else
            swap(input[mid],input[high--]);
    }
}
void display(int *arr,int s)
{
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={0,1,1,0,1,0,1};
    cout<<"\nThis is given array:-";
    display(arr,7);
    sortZeroesAndOne(arr,7);
    cout<<"\nThis is sorted Array:-";
    display(arr,7);
    cout<<"\n\n";

    return 0;
}