// WAP to check the Occurence of the each element is unique or not
/* Example 1:
        Input: arr = [1,2,2,1,1,3]
        Output: true
        Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
        Input: arr = [1,2]
        Output: false */

#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> map1,map2;
        for(auto &value:arr)
            map1[value]++;
        for(auto &value:map1){
            map2[value.second]++; 
            if(map2[value.second]>1)
               return false;
        }
        return true;
    }

int main()
{
    vector<int> arr = {1,2,2,1,1,3};
    cout<<"\nThe given array of vector elements have unique occurence: ";
    (uniqueOccurrences(arr)) ? cout<<"True\n\n" : cout<<"\nFalse\n\n";
    return 0;
}