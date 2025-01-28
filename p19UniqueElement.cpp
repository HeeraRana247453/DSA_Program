// WAP to find the unique element from the set of Array in which the frequecy of each element is 2 or 1
// Find the element which has frequency 1
#include<iostream>
using namespace std;


int findUnique(int arr[],int s)
{   int ans = 0;
    for(int i=0;i<s;i++)
    {
        ans = ans ^ arr[i];   //00^10 -> 10^11 -> 001^100 -> 0101^1000 -> 1101^0100 -> 1001^0010 -> 1011^0011 -> 1000
    }
    return ans;
}

int main()
{
    int arr[] = {2,3,4,8,4,2,3,5,8};
    cout<<"Unique element is: "<<findUnique(arr,9)<<endl;;
    return 0;
}