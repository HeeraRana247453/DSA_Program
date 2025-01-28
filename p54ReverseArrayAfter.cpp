/* Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
Example:
        We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
        based indexing so the subarray {5, 6} will be reversed and our 
        output array will be {1, 2, 3, 4, 6, 5}.
 */
#include<iostream>
#include<vector>
using namespace std;

// using two pointer approach
void reverse(vector<int> &arr,int m)
{
    int s = m+1;
    int e = arr.size()-1; //necessay minus 1
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;e--;
    }
}
void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int m = 3;

    cout<<"\nBefore swapping: ";
    display(arr);
    reverse(arr,m);
    cout<<"\nAfter swapping: ";
    display(arr);
    cout<<"\n\n";

    return 0;
}