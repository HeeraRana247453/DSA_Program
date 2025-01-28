/* 
189. ROTATE ARRAY
==================
    Given an integer array nums, rotate the array to the right by k steps, where k is non-negative. 
*/
#include<iostream>
#include<vector>
using namespace std;

// First Approach
void rotate(vector<int>& nums, int k)
{
    int n=nums.size();
    vector<int> temp(n);

    for(int i=0;i<n;i++)
        temp[(i+k)%n] = nums[i]; 

    nums = temp;
}

// Display
void display(vector<int> &arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{   
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    cout<<"\nBefore rotate: ";
    display(arr);
    rotate(arr,k);
    cout<<"\nAfter rotate: ";
    display(arr);
    cout<<"\n\n";

    return 0;
}