 /* Problem statement:-
                You are given an array 'ARR' of integers of length N. Your task is to find the first missing positive integer in linear time and constant space.
                In other words, find the lowest positive integer that does not exist in the array. The array can have negative numbers as well.

For example:- the input [3, 4, -1, 1] should give output 2 because it is the smallest positive number that is missing in the input array.
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstMissing(int arr[], int n)
{
    vector<int> v1(arr,arr+n);  //this is extra space will increase the space complexity
    sort(v1.begin(),v1.end());
    int a = 1;
    for(auto itr=v1.begin();itr!=v1.end();itr++)
    {
      if(*itr > 0)
      {
        if (*itr != a)
        {
          return a;
        }
        a++;
        if(itr==v1.end()-1)
        {
            return *itr+1;
        }
     }
    }
    return a;
}

int main(){
    // int arr[]={-2,-6,1,0,-4,5};       //first test case
    // int arr[]={-2,-6,-5,-23,-34};  //second test case
    int arr[]={0,1,2,3,4};          //third test case
    
    int misNum = firstMissing(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"\nFirst Missing Number: "<<misNum<<endl;

    return 0;
}