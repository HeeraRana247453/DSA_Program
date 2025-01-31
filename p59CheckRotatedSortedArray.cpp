/* 1752. Check if Array Is Sorted and Rotated
==============================================
Given an array nums, return true if the array was originally sorted in non-decreasing order,
 then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length],
 where % is the modulo operation. */

#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
    int s=nums.size();
    int count=0;
    for(int i=1;i<=s;i++)   //one extra comparison for comparing the last with first
    {
        if(nums[(i-1)%s]>nums[(i)%s]){
            count++;
        }
    }
    if(count>1)
        return false;
    return true;
}

int main()
{
    vector<int> arr = {2,1};
    cout<<"It is sorted rotated array : "<<check(arr)<<endl;
    return 0;
}