/* Find the pivot element in an arrya like 
        arr1[]={3,4,5,1,2}   //pivot = 1
        arr2={4,5,6,7,8,2,3}  //pivot = 2 
*/

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
        int mid=low+(high-low)/2;
        if(nums[mid]>=nums[0])
            low=mid+1;
        else
            high=mid;
        }
        return low;
}

int main(){
    // vector<int> nums={3,8,10,17,1};     //Test case-1
    // vector<int> nums={4,5,6,7,8,2,3};   //Test case-2
    vector<int> nums={3,4,5,1,2};       //Test case-3
    int pivot=pivotIndex(nums);
    cout<<"\nthis is pivot index: "<<pivot<<endl;

    return 0;
}