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
 */


#include<iostream>
using namespace std;

int search(int* arr, int n, int key) {
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>=arr[low])
        {
            if(key>=arr[low] && key<=arr[mid]){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        else{
            if(key>arr[mid] && key<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={3,1,2};
    int key=3;
    int index=search(arr,3,key);
    cout<<"\nIndex="<<index<<"\n";
    return 0;
}