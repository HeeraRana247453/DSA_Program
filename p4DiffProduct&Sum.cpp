// Difference of Product and Sum of digits of an integer no.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    subtractProductAndSum(n);
}

int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        while(n>0){
            int digit = n%10;
            n=n/10;
            sum = sum + digit;
            pro = pro*digit;
        }
        int res=pro-sum;
        return res;
    }