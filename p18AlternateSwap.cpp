// Swap the elements of array in pair from left to right

#include<iostream>
using namespace std;

void alternateSwap(int arr[],int s)
{
    for(int i=0;i<s;i=i+2)
    {
        if(i+1<s)
            swap(arr[i],arr[i+1]);
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
    int arr[11]={0,1,2,3,4,5,6,7,8,9,12};
    display(arr,11);
    alternateSwap(arr,11);
    display(arr,11);
    return 0;
}