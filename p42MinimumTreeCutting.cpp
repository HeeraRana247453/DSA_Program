/* 
Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire.
However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all
 tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the 
 tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting 
 will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. 
Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

Example:-
        Input:
            4 7
            20 15 10 17
        Output:
            15
        Input:
            5 20
            4 42 40 26 46
        Output:
            36
 */
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &trees,int n,int m,int mid)
{
    int meter=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=mid)
        {
            meter = meter + (trees[i]-mid);   //Cut the by mid height and add to the meter(required wood)
            if(meter >= m)
            {
                return true;
            }
        }
    }
    return false;
}

int maximumHeight(vector<int> &trees,int m)
{
    int low=0;
    int high;
    int mid;
    int totalHeight=0;
    int n=trees.size();
    int ans=-1;

    for(auto value:trees)
        totalHeight+=value;
    
    high=totalHeight;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(isPossible(trees,n,m,mid))
        {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
// Test case-1
    // vector<int> trees = {20, 15, 10, 17};
    // int requireWood = 7;

// Test case-2
    vector<int> trees = {4, 42, 40, 26, 46};
    int requireWood = 20;
    int height = maximumHeight(trees,requireWood);
    cout<<"\nMaximum Possible height is: "<<height<<endl<<endl;
    return 0;
}