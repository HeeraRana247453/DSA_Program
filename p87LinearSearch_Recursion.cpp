/*  WAP to implement the Linear Search using Recursion
    ---------------------------------------------------*/
    
#include<iostream>
using namespace std;

void printArray(int arr[],int s);

//First Approach
bool linearSearch_1(int *arr, int key, int size)
{
    printArray(arr,size);cout<<"\n";
    if(size==0) //base condition-1
        return false;

    if(arr[0]==key)  //base condition-2
        return true;
    
    return linearSearch_1(arr+1,key,size-1); //recursive relation
}

//Second Approach (also return index)
int linearSearch_2(int *arr,int key,int size)
{
    printArray(arr,size);cout<<"\n";
    if(size==0)
        return -1;

    if(arr[size-1]==key)
        return size-1;
    
    return linearSearch_2(arr,key,size-1);
}
int main()
{
    int arr[] = {2,3,5,6,7,8,9,0,12,42,54};
    int key;
    cout<<"\nEnter the key to search the element : ";
    cin>>key;
    
//First Approach
    bool res = linearSearch_1(arr,key, sizeof(arr)/sizeof(arr[0]));

    if(res)
        cout<<"\n"<<key<<" is present in the array\n\n";
    else
        cout<<"\n"<<key<<" is not present in the array\n\n";

//Second Approach
    int index = linearSearch_2(arr,key, sizeof(arr)/sizeof(arr[0]));
    if(index>=0)
        cout<<"\nElement is present in the array at - arr["<<index<<"]\n\n";
    else
        cout<<"\nElement is not present in the array !!\n\n";    

    return 0;
}

// Display array in between the recursive calls
void printArray(int arr[],int s){
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}