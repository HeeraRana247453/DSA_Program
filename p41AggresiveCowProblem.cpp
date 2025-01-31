/*
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
Print the maximum possible minimum distance.

Example:
    Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
    Output: 2
    Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
 */


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls,int n,int m,int mid)
{   
    int cow=1;
    int lastPos=stalls[0];
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastPos>=mid)
        {
            cow++;
            if(cow==m)
            {
                return true;
            }
            lastPos=stalls[i];  
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int low=0;
    int high;
    int mid;
    int maxiPosition=-1;
    int n=stalls.size();
    int ans=-1;

    
    for(int i=0;i<n;i++)
        maxiPosition=max(maxiPosition,stalls[i]);
    
    high=maxiPosition;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(isPossible(stalls,n,k,mid))
        {
            ans=mid;
            low=mid+1;//if not fighting at mid then will not fight at more than mid
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {4,2,1,3,6};
    int cowsNum = 2;

    int maxMinDis = aggressiveCows(stalls,cowsNum);
    cout<<"\nMaximum Possible minimum distance : "<<maxMinDis<<"\n\n";
    
    return 0;
}