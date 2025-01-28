 /* Problem statement
    You are given an array Arr consisting of n integers, you need to find all the distinct triplets present in the array which adds up to zero.
    An array is said to have a triplet {arr[i], arr[j], arr[k]} with 0 sum if there exists three indices i, j and k such that i!=j, j!=k and i!=k and arr[i] + arr[j] + arr[k] = 0.
Note :
    1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then (2, -3, 1), (-3, 2, 1) etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
    2. The elements in the array need not be distinct.
    3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
 */

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Through Sorting technique (by three pointer approach)

vector<vector<int>> findTriplets(vector<int>arr, int n)
{
	sort(arr.begin(),arr.end());
	set<vector<int>> ans;
	for(int i=0;i<n;i++)   //arr[i] will static for some time
	{
		int left=i+1;
		int right=n-1;
		while(left<right){  //arr[left] & arr[right] will move for some time
			int sum = arr[i] + arr[left] + arr[right];
			if(sum==0)
			{
				ans.insert({arr[i],arr[left],arr[right]});
				left++;right--;
			}
			else if(sum<0)
				left++;
			else
				right--;
		}
	}
	vector<vector<int>> res(ans.begin(),ans.end());
	return res;
}

int main()
{
    vector<int> arr={1,2,3,-1,-2,-3};
    vector<vector<int>> trip;
    trip = findTriplets(arr,6);
    cout<<"\nTriplets are:- "<<endl;
    for(auto &row:trip)
    {
        for(auto &col:row){
            cout<<col<<",";
        }
        cout<<endl;
    }
    return 0;
}