/* 
WAP to sort an array using the Bubble sort
*/
#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int> &arr,int j,int n)
{
    if(j>n)
        return;
    
    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    
    bubble(arr,j+1,n);
}
void bubbleSort(vector<int> &arr,int i,int n)
{
    if(i>n)
        return;
    
    bubble(arr,0,n);
    bubbleSort(arr,i+1,n);
}

void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}
int main()
{
    vector<int> arr = {43,54,7,2,64,13,70,21};
    int n = arr.size();

    cout<<"\nBefore sorting: ";
    display(arr);

    bubbleSort(arr,0,n-1);
    cout<<"\nAfter sorting: ";
    display(arr);
    cout<<"\n";

    return 0;
}