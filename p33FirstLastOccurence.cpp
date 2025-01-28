 /* Problem statement

You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.


Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.


Note :

1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.
 */

#include<iostream>
#include<vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid] == k)
         {
                int prev=mid;
                int next=mid;
                while(arr[mid]==arr[next] || arr[mid]==arr[prev])
                {
                    if(arr[mid]==arr[prev])
                        prev--;
                    if(arr[mid]==arr[next])
                        next++;
                }
                prev++;
                next--;
                if(prev==-1) 
                    prev=prev+1;
                return {prev,next};
        } 
        else if (arr[mid] > k)
          high=mid-1;
        else
            low=mid+1;
    }
    return {-1,-1};
}

int main()
{
    vector<int> arr;
    pair<int,int> res;
    // arr={0,0,1,1,2,2,2,2};
    // arr={0,1,1,3,5,6,9,9}; 
    // arr={3,3,3};
    arr={3}; 

    int key = 3;
    res= firstAndLastPosition(arr,arr.size(),key);
    cout<<"\nFirst Occurence at: "<<res.first<<"\n";
    cout<<"\nLast Occurence at: "<<res.second<<"\n";
    cout<<"\n Occurence of '"<<key<<"' is "<<res.second-res.first+1<<" times\n\n";
    return 0;
}