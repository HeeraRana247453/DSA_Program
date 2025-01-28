#include<iostream>
using namespace std;

void reverse(int arr[],int s)
{
    for(int i=0;i<s/2;i++){
        // int temp = arr[i];
        // arr[i]=arr[s-i-1];
        // arr[s-i-1]=temp;

        swap(arr[i],arr[s-i-1]);
    }
}

void display(int arr[],int s)
{  
     cout<<"Array: ";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[13] = {0,1,2,3,4,5,6,7,8,9,89,12,13};
    display(arr,13);
    reverse(arr,13);
    display(arr,13);
    return 0;
}