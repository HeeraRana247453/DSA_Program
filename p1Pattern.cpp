// Pattern half number and half stars
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=0;i<n;i++){
        // left part
        for(int j=0;j<n;j++){
            if(i+j<=(n-1)){
                cout<<" "<<j+1;
            }
            else{
                cout<<" *";
            }
        }

        // right part
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<" "<<n-j;
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
}