// Find the square root without using the built in function or operator(x**0.5)

// Create a search space
// Apply Binary Search
#include<iostream>
using namespace std;

int sqrtRecursion(int num,int s,int e,int ans)
{

    if(s>e)
        return ans;

    int mid = s + (e-s)/2;
    int square = mid*mid;

    if(square == num)
        return mid;
    else if(square < num){
        ans = mid;
        mid = sqrtRecursion(num,mid+1,e,ans);
    }
    else
        mid = sqrtRecursion(num,s,mid-1,ans);
    
    return mid;
}

int main()
{
    int num;
    cout<<"\nEnter the number to find sqrt : ";
    cin>>num;

    int value = sqrtRecursion(num,0,num,num/2);
    cout<<"\nSquare Root of "<<num<<" is : "<<value<<endl;

    return 0;
}