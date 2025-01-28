//Program to check the given number is power of two or not

// First Approach
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        int r;
        while(n>0){
            
            if(n==1)
                return true;
            r = n%2;
            n/=2;
            if(r!=0){
                return false;
            }
        }
        return true;
    }

int main(){
    int n;
    cout<<"This number is a power of Two: ";
    cin>>n;

    cout<<isPowerOfTwo(n)<<endl;
    return 0;
}