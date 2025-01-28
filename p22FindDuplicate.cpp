// Find the duplicate element from the given array.

#include<iostream>
#include<vector>
#include<map>
using namespace std;


// First Approach( valid for all, also for next question)
int findDuplicate(vector<int> &arr) 
{
	map<int,int> map1;
        for (auto &value : arr){
          map1[value]++;
          if (map1[value] > 1)
            return value;
        }
    return 0;
}

int main()
{
    vector<int> arr = {1,2,4,5,9,8,7,3,5};
    cout<<"\nDuplicate is: "<<findDuplicate(arr)<<endl;
    return 0;
}