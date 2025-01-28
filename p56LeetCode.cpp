/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
 To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
  and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

// also saved the space compelexity
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums1,int m,vector<int> &nums2,int n)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0)
    {
        if(i>=0 && nums1[i]>nums2[j])
                nums1[k--]=nums1[i--];
        else
            nums1[k--]=nums2[j--];
    }
}
void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}
int main()
{
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};

    cout<<"\narr1- ";
    display(arr1);
    cout<<"\narr2- ";
    display(arr2);
    merge(arr1,3,arr2,3);
    cout<<"\narr3- ";
    display(arr1);
    cout<<"\n\n";

    return 0;
}