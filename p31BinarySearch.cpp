// Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int v)
{
    int low=0;
    int high = n-1;
    while(low<=high)
    {
    int mid= low + (high-low)/2;  //because mid=(low+high)/2 can lead to out of range of integer

        if(arr[mid]==v)
            return mid;
        else if(arr[mid]<v)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,11,13,15};
    int key;cout<<"Enter the searching value: ";cin>>key;
    int index=binarySearch(arr,sizeof(arr)/sizeof(arr[0]),key);
    if(index==-1)
        cout<<"\nSearching value "<<key<<" is not present in the given array \n"<<endl;
    else
        cout<<"\nSearching value "<<key<<" is present at index= "<<index<<endl<<endl;
    return 0;
}