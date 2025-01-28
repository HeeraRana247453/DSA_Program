/*  Problem statement
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively,
 where each array element represents a digit. You need to find the sum of these two numbers and return this sum in
 the form of an array.
Note:
    1.The length of each array is greater than zero.
    2.The first index of each array is the most significant digit of the number.
        For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and
         array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.
    3.Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sumOfTwoArrays(vector<int> &a,int n,vector<int> &b,int m)
{
    vector<int> c;
    int first =0;
    int second =0;
    int third = 0;
    
    // First Number
    for(int i=0;i<n;i++)
        first=(first*10) + a[i];

    // Second Number
    for(int j=0;j<m;j++)
        second=(second*10) + b[j];
    
    // Third Number
    third = first + second;
    
    // Put in Array
    while(third!=0)
    {
        int digit=third%10;
        third=third/10;
        c.push_back(digit);
    }
    // Reverse Array
    reverse(c.begin(),c.end());
    return c;
}
void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> a={6,3,5};
    vector<int> b={2,5};
    vector<int> sum = sumOfTwoArrays(a, a.size(), b, b.size());
    
    cout<<"\nFirst Array: ";
    display(a);
    cout<<"\nSecond Array: ";
    display(b);
    cout<<"\nSum Array: ";
    display(sum);
    cout<<"\n\n";
    
    return 0;
}