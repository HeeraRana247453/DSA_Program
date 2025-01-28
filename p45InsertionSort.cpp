// Insertion Sort
#include<iostream>
#include<vector>
using namespace std;

// First Approach  (worst case - O(n^2) , best case - O(n))
void insertionSort_1(vector<int> &arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else
                break;
        }
    }
}

// Second Approach
void insertionSort_2(vector<int> &arr,int n){
    int i=1;
    while(i!=n){
        if(arr[i] < arr[i-1]){
            swap(arr[i], arr[i-1]);
            i--;       //pointer 'i' move in the left direction
        }
        else{
            i++;     //pointer 'i' will move in the right direction
        }
    }
}

// Third Approach(This is more Optimized) (worst case - O(n2), best case - O(n))
void insertionSort_3(vector<int> &arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)  
        {
            arr[j+1]=arr[j];   //to set back all the elements of the array upto  arr[j]>temp
            j--;
        }
        arr[j+1]=temp;
    }
}

void display(vector<int>arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr={34,54,65,90,12,25};
    int n=arr.size();

    cout<<"\nThis is the given Array: ";
    display(arr);
    insertionSort_3(arr,n);

    cout<<"\nThis is the sorted Array: ";
    display(arr);
    cout<<"\n\n";

    return 0;
}