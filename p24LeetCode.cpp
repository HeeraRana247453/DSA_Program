/* Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

Example 1:
        Input: nums = [4,3,2,7,8,2,3,1]
        Output: [2,3]
Example 2:
        Input: nums = [1,1,2]
        Output: [1]
Example 3:
        Input: nums = [1]
        Output: []
 */

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findAllDuplicate(vector<int> &arr,int s)
{       vector<int> arr2;
        map<int,int> m1;
        for(auto value:arr)
        {
        m1[value]++;
        if(m1[value]>1)
                arr2.push_back(value);
        }
        return arr2;
}

int main()
{
    vector<int> arr1, arr = {4,3,2,7,8,2,3,1};
    arr1 = findAllDuplicate(arr,8);
    cout<<"\nDuplicate Array:- ";
    for(int value:arr1){
        cout<<value<<" ";
    }
    cout<<"\n\n";
    return 0;
}