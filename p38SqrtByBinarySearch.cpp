// Find the square root without using the built in function or operator(x**0.5)

// Create a search space
// Apply Binary Search

#include<iostream>
using namespace std;

int mySqrt(int x) {
        int low=0;
        int high=x/2;
        long long int mid;
        int ans=-1;
        if(x==1 || x==2)
        {
            return 1;
        }
        while(low<=high)
        {
            mid=low+(high-low)/2;
            long long int square=mid*mid;

            if(square==x)
                return mid;
            else if(square<x){
                ans=mid;  //memoization
                low=mid+1;
                }
            else
                high=mid-1;
        }
        return ans;
    }

double precise(int num,int value,int precision)
{
    double ans=value;
    double factor=1;
    for(int i=0;i<precision;i++)
    {
            factor=factor/10;
            //0.1
            //0.001
            //0.0001
        for(int j=value;j*j<num;j=j+factor)//value.1 // value.2 //value.3
        {
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num;cout<<"\nEnter the number: ";cin>>num;
    int integerValue = mySqrt(num);

    cout<<"\nThis is the integer value: "<<integerValue<<endl;

    cout<<"\nThis is more precise value: "<<precise(num,integerValue,2)<<endl;//This is not working
    return 0;
}