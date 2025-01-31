 /* Problem statement
        You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:
    Each pair should be sorted i.e the first value should be less than or equals to the second value. 
    Return the list of pairs sorted in non-decreasing order of their first value. 
    In case if two pairs have the same first value, the pair with a smaller second value should come first.
 */


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> v1;
   for(int i=0;i<arr.size();i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            v1.push_back(temp);
         }
      }
   }
   sort(v1.begin(),v1.end());
   return v1;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    int sum=5;

    cout<<"\nPair Sum array:- "<<endl;
    vector<vector<int>> arr2 = pairSum(arr,sum);
    for(auto row:arr2)
    {
        for(auto col:row)
            cout<<col<<" ";
    cout<<"\n";
    }
    cout<<"\n\n";
    return 0;
}