 /* Problem statement:-
                You are given an array 'ARR' of integers of length N. Your task is to find the first missing positive integer in linear time and constant space.
                In other words, find the lowest positive integer that does not exist in the array. The array can have negative numbers as well.

For example:- the input [3, 4, -1, 1] should give output 2 because it is the smallest positive number that is missing in the input array.
 */

#include<iostream>
#include<vector>
using namespace std;

pair<int,int> occurence(vector<int> arr,int key,int s,int e)
{
    if(s>e)
        return {-1,-1};
    
    int mid = s+(e-s)/2;
    if(arr[mid]==key)
    {   //divide in two parts
        int prev = occurence(arr,key,s,mid-1).first;//always calculate left part & will return first part of pair always in each recursive call during recursion
        int next = occurence(arr,key,mid+1,e).second;//always calculate right part & will return second part of pair always in each recursive call during recursion

        if(prev==-1)
            prev=mid;
        if(next==-1)
            next=mid;
        return {prev,next};    
    }
    else if(arr[mid]>key)
        return occurence(arr,key,s,mid-1);
    else
        return occurence(arr,key,mid+1,e);
}

pair<int,int> firstAndLastPosition(vector<int> arr,int size,int key)
{
    return occurence(arr,key,0,size-1);
}

int main()
{
    vector<int> arr;
    pair<int,int> res;
    arr={0,0,1,1,2,2,2,2};
    // arr={0,1,1,3,5,6,9,9}; 
    // arr={3,3,3};
    // arr={3}; 

    int key = 2;
    res= firstAndLastPosition(arr,arr.size(),key);
    cout<<"\nFirst Occurence at: "<<res.first<<"\n";
    cout<<"\nLast Occurence at: "<<res.second<<"\n";
    cout<<"\n Occurence of '"<<key<<"' is "<<res.second-res.first+1<<" times\n\n";
    return 0;
}