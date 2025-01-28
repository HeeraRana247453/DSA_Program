/* Peak Index in a Mountain Array :
        You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
        Return the index of the peak element.
        Your task is to solve it in O(log(n)) time complexity. 

Constraints:
    3 <= arr.length <= 105
    0 <= arr[i] <= 106
    arr is guaranteed to be a mountain array.
*/

#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> &arr,int low,int high)
{
    int mid = low+(high-low)/2;
    if(low==high)
        return mid;
    else if(arr[mid]>arr[mid+1])
        mid=peakIndex(arr,low,mid);
    else
        mid=peakIndex(arr,mid+1,high);
    
    return mid;
}

int main()
{
    // vector<int> arr = {0,1,0};       //Test case-1
    // vector<int> arr = {0,2,1,0};     //Test case-2
    // vector<int> arr = {0,10,50,2};   //Test case-3
    vector<int> arr = {1,3,4,9,4,2,1};  //Test case-4

    int peak = peakIndex(arr,0,arr.size()-1);
    cout<<"\nPeak Index : "<<peak<<endl;

    return 0;
}