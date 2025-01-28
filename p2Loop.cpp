// For understanding the behaviour of for loop

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i=0;//initialization
    for( ; ; ){
        if(i<=n){//updating condition
            cout<<i<<endl;
        }
        else{//teminating condition
            break;
        }
        i++;//update
    }
}