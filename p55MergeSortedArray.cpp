// WAP to Merge two sorted Array to new array
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1,vector<int> &arr2,vector<int> &arr3)
{   int n = arr1.size();
    int m = arr2.size();

    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            arr3.push_back(arr1[i++]);
        else
            arr3.push_back(arr2[j++]);
    }

    while(i<n)
        arr3.push_back(arr1[i++]);
    while(j<m)
        arr3.push_back(arr2[j++]);
}

void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6,8,10};
    vector<int> arr3 ;

    cout<<"\narr1- ";
    display(arr1);
    cout<<"\narr2- ";
    display(arr2);
    merge(arr1,arr2,arr3);
    cout<<"\narr3- ";
    display(arr3);
    cout<<"\n\n";

    return 0;
}