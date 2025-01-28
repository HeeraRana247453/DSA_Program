/* Find the pivot element in an arrya like 
        arr1[]={3,4,5,1,2}   //pivot = 1
        arr2={4,5,6,7,8,2,3}  //pivot = 2 
*/
#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &arr,int s,int e)
{
    int mid = s+(e-s)/2;
    if(s==e)
        return mid;
    else if(arr[mid]>arr[0])
        mid = pivotIndex(arr,mid+1,e);
    else if(arr[mid]<arr[0])
        mid = pivotIndex(arr,s,mid);
    
    return mid;
}

int main()
{
    // vector<int> arr = {4,5,6,7,8,2,3};
    vector<int> arr = {3,4,5,1,2};

    int index = pivotIndex(arr,0,arr.size());
    cout<<"\nIndex of pivot element is : "<<index<<endl;

    return 0;
}