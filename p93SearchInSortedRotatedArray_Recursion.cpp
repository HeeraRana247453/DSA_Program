/* Search In Sorted Rotated Array
 ==================================
 Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.
For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

Now, your task is to find the index at which ‘k’ is present in 'arr'.

Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.

Example:
        Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
        Output: 3
        Explanation:
            If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).

Expected Time Complexity:
        Try to do this in O(log(n)). 
 */

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[],int key,int s,int e)
{
    if(s>e)
        return -1;

    int mid = s + (e-s)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]>=arr[s])   //it will check the position of mid
    {
        if(key>=arr[s] && key<arr[mid])  //it will check the position of key
            mid = binarySearch(arr,key,s,mid-1);
        else
            mid = binarySearch(arr,key,mid+1,e);
    }
    else{
        if(key<=arr[e] && key>arr[mid])    
            mid = binarySearch(arr,key,mid+1,e);
        else
            mid = binarySearch(arr,key,s,mid-1);
    }

    return mid;
}

int search(int arr[],int size,int key)
{
    return binarySearch(arr,key,0,size-1);
}

int main()
{
    // int arr[]={3,1,2};               //Test case-1
    // int key=2;

    // int arr[]={12, 15, 18, 2, 4};    //Test case-2
    // int key=4;

    int arr[] = {2, 3, 5, 8};           //Test case-3
    int key = 3;

    int size = sizeof(arr)/sizeof(arr[0]);
    
    int index=search(arr,size,key);
    cout<<"\nIndex = "<<index<<"\n";

    return 0;
}