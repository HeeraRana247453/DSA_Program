/* WAP to verify that the given array is sorted or not ,using Recursion
   ----------------------------------------------------------------------- */

#include<iostream>
using namespace std;

//First Approach (My approach)
bool isSorted_1(int arr[],int size)
{
    if(size<2)//base condition-1
        return true;

    cout<<"size-1="<<size-1<<" > size-2="<<size-2<<endl;//processing

    if(arr[size-1]<arr[size-2]) //base condition-2
        return false;

    return isSorted_1(arr,size-1);//recursive relation
}

//Second Approach (Lovebabbar)
bool isSorted_2(int arr[],int size)
{
    if(size<2)//base condition-1
        return true;

    cout<<"size-1="<<size-1<<" > size-2="<<size-2<<endl;//processing

    if(arr[0] > arr[1]) //base condition-2
        return false;

    return isSorted_2(arr+1,size-1);//recursive relation  (arr+1 means base address of array plus one)
}

int main(){
    int arr[10] = {1,3,4,5,18,6,7,8,9,10};

    int res = isSorted_2(arr, sizeof(arr)/sizeof(arr[0]));

    if(res==1)
        cout<<"\nArray is sorted\n";
    else 
        cout<<"\nArray is not sorted\n";

    return 0;
}