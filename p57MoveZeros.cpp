/* 
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/
#include<iostream>
#include<vector>
using namespace std;

// First Approach
void moveZeroes(vector<int>& nums)
{
    int i=0;
    while(i<nums.size())
    {
    int j=i+1;
        if(nums[i]==0)
        {
            while(j<nums.size())
            {
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
}
// Second Approach (more optimized)
void moveZeros(vector<int> &arr)
{   int s=arr.size();
    int i=0;
    int j=0;
    while(i<s)
    {
        if(arr[i]!=0)
            swap(arr[i],arr[j++]);

        i++;
    }
}
// display
void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr = {0,1,0,3,12};
    cout<<"\nBefore: ";
    display(arr);
    moveZeros(arr);
    cout<<"\nAfter: ";
    display(arr);
    cout<<"\n\n";
    return 0;
}