/* 
Count Ways To Reach The N-th Stairs 
===================================
Problem statement
        You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
        Each time, you can climb either one step or two steps.
        You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

Example :
    N=3
    We can climb one step at a time i.e. {(0, 1) ,(1, 2),(2,3)} or we can climb the first two-step and then one step
    i.e. {(0,2),(1, 3)} or we can climb first one step and then two step i.e. {(0,1), (1,3)}.
Constraints :
    1 <= 'T' <= 10
    0 <= 'N' <= 10^5
    Where 'T' is the number of test cases, and 'N' is the number of stairs.
    It is guaranteed that sum of 'N' over all test cases is <= 10^5.
*/

#include<iostream>
using namespace std;

int countDistinctWays(int n)
{
    if(n<=3)
        return n;
    return countDistinctWays(n-2) + countDistinctWays(n-1);
}

int main()
{
    int num;
    cout<<"\nEnter the number of stairs : ";
    cin>>num;

    int res = countDistinctWays(num);
    cout<<"\nTotal no. of ways to reach nth stair is : "<<res<<endl;

    return 0;
}

// This is not fully optimized After study Dynamic Programming do it with DP and made it fully optimized
