/* 
  WAP to sort an given array using insertion sort
*/
#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &arr,int j)
{
    if(j<0 || arr[j-1]<arr[j])
        return;
    
    if(arr[j-1]>arr[j])
        swap(arr[j-1],arr[j]);//processing and base condition

    insert(arr,j-1);//recursive call
}

void insertionSort(vector<int> &arr,int i,int n)
{
    if(i>n)
        return;

    insert(arr,i);
    insertionSort(arr,i+1,n);
}

void display(vector<int> &arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr = {53,64,3,23,12,95,2};
    int n = arr.size();

    cout<<"\nBefore: ";
    display(arr);

    insertionSort(arr,1,n-1); //start from the second element of the array, take as first element of the array is already sorted

    cout<<"\nAfter: ";
    display(arr);
    cout<<"\n";

    return 0;
}