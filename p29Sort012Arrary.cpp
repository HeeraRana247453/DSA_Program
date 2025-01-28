 /* 
 Problem statement
        You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.
    Note :
        Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words,
         you will be visiting each element in the array/list just once.
 */

#include<iostream>
using namespace std;

// First Approach
void sort012First(int *arr,int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }
}

// Second Approach
void sort012Second(int *arr, int n){
   int low = 0;            // Pointer for 0s
   int mid = 0;            // Pointer for 1s
   int high = n - 1;       // Pointer for 2s
   while (mid <= high) 
   {
     if (arr[mid] == 0)
       swap(arr[low++], arr[mid++]);
     else if (arr[mid] == 1)
       mid++;
     else
       swap(arr[mid], arr[high--]);
   }
}

void display(int *arr,int s){
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={0,2,1,0,2,1,1,0};
    cout<<"\nThis is given Array:- ";
    display(arr,8);
    sort012First(arr,8);
    cout<<"\nThis is Sorted Array:-";
    display(arr,8);
    cout<<"\n\n";

    return 0;
}