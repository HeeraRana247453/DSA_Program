#include<iostream>
using namespace std;

int linearSearch(int arr[],int s,int k)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==k)
            return 1;
    }
    return 0;
}

int main()
{
    int arr1[10] = {10,3,5,9,23,54,8,6,2};
    int key;cout<<"Enter the key: ";cin>>key;
    (linearSearch(arr1,10,key)) ? cout<<"\nPresent\n\n" : cout<<"\nNot Present!!\n\n";

    return 0;
}