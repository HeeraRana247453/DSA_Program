/* 
Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. 
Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.

You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only
 paint the continuous sections of boards.

Example :
    Input: arr = [2, 1, 5, 6, 2, 3], k = 2
    Output: 11
    Explanation:
        First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will
         paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time.
*/

// Create search space 
//Apply binary search
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &boards,int n,int m,int mid)
{  
    int painter=1;
    int boardLength=0;
    
    for(int i=0;i<n;i++)
    {
        if(boardLength+boards[i]<=mid)
        {
            boardLength+=boards[i];
        }
        else{
            painter++;
            if(painter>m || boards[i]>mid)
                return false;
            else{
                boardLength=boards[i];
            }
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low=0;
    int high;
    int mid;
    int totalsum=0;
    int ans=-1;
    int n=boards.size();

    if(k>n)
        return ans;

    for(auto &value:boards)
        totalsum+=value;

    high=totalsum;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> boards = {2, 1, 5, 6, 2, 3};
    int numPainter = 2;
    int dis = findLargestMinDistance(boards,numPainter);
    cout<<"\nLargest minimum distance is: "<<dis<<endl<<endl;

    return 0;
}