// Can write multiple expressions in the for loop

#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int a=5,b=3,c=1 ; a<=n && b<=n && c<=n ; a++, b++, c++){    //all the three condition is checking everytime
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    cout<<"\n\nSecond loop..\n"<<endl;
                                        //*
    for(int a=5,b=3,c=1 ; a<=n , b<=n, c<=n ; a++, b++, c++){       //Out of three condition only last condition is checking everytime
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}