//Demonstrating the use of functions
// program to calculate the Combination
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}
int combination(int n,int r){
    int res = factorial(n)/(factorial(r)*factorial(n-r));
    return res;
}

//Main
int main(){
    int n,r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;

    int res = combination(n,r);
    cout<<"No. of combinations are: "<<res<<endl;
    return 0;
}