/*
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
Print the maximum possible minimum distance.

Example:
    Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
    Output: 2
    Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.

Sample Input 1 :
            6 4
            0 3 4 7 10 9
Sample Output 1 :
            3
Explanation to Sample Input 1 :
            The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. 
            Here distance between cows are 3, 4 and 3 respectively.

Sample Input 2 :
            5 2
            4 2 1 3 6
Sample Output 2 :
            5

Expected time complexity: Can you solve this in O(n * log(n)) time complexity?

Constraints :
        2 <= 'n' <= 10 ^ 5
        2 <= 'k' <= n
        0 <= 'arr[i]' <= 10 ^ 9
        Time Limit: 1 sec.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr,int n,int k,int mid,int lastPos,int cow,int i,int res)
{

    if(i>=n)
        return false; //base condition

    if(arr[i]-lastPos >= mid)
    {
        cow++;
        if(cow==k)  //base condition
            return true;
        res = isPossible(arr,n,k,mid,arr[i],cow,i+1,res);  //don't use increment or decrement in recursive call (i.e. i++, ++i)
    }
    else{
        res = isPossible(arr,n,k,mid,lastPos,cow,i+1,res);  //else is necessary to use in such situation
    }
    return res;
}

int maxMinDis(vector<int> &arr,int n,int k,int low,int high,int ans)
{
    int mid = low+(high-low)/2;
    if(k>n)
        return ans;

    if(low>high)//base condition
        return ans;
    
    if(isPossible(arr,n,k,mid,arr[0],1,0,false))
    {
        ans=mid;
        ans = maxMinDis(arr,n,k,mid+1,high,ans);
    }
    else{
        ans = maxMinDis(arr,n,k,low,mid-1,ans);
    }

    return ans;
}

int main()
{   
    // vector<int> arr = {1,2,3};           //Test case-1
    // int k = 2;

    // vector<int> arr = {0, 3, 4, 7, 10, 9}; //Test case-2
    // int k = 4;

    vector<int> arr = {4, 2, 1, 3, 6};      //Test case-3
    int k = 2;

    int size = arr.size();
    sort(arr.begin(),arr.end());
    
    int maxValue = arr[size-1] - arr[0];

    int res = maxMinDis(arr,size,k,0,maxValue,-1);
    cout<<"\nMaximum minimum Distance: "<<res<<endl;
    return 0;
}