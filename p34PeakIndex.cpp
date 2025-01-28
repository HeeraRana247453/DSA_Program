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

int peakIndexInMountainArray(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(low==high)
            return mid;
        else if(arr[mid]<arr[mid+1])
            low=mid+1;
        else if(arr[mid]>arr[mid+1])
            high=mid;
    }
    return -1;
}

int main(){
    // vector<int> arr={0,10,5,2};
    vector<int> arr={0,1,5,9,2};
    int peak = peakIndexInMountainArray(arr);
    cout<<"\nPeak index is: "<<peak<<"\n\n";
    return 0;
}