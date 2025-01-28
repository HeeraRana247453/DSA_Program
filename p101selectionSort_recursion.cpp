/* WAP to sort the given array using selection sort
*/

#include<iostream>
#include<vector>
using namespace std;


void selectedSort(vector<int> &arr,int i,int j,int n)
{
    if(j>n)
        return;
    
    if(arr[i]>arr[j])
        swap(arr[i],arr[j]);

    selectedSort(arr,i,j+1,n);
}
void selectionSort(vector<int> &arr,int i,int n)
{
    if(i>n)
        return;
    
    selectedSort(arr,i,i+1,n);
    selectionSort(arr,i+1,n);
}

void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}
int main()
{
    vector<int> arr = {2,45,5,3,7,4,23,75};
    int n = arr.size()-1;

    cout<<"\nBefore: ";
    display(arr);

    selectionSort(arr,0,n);

    cout<<"\nAfter: ";
    display(arr);
    cout<<"\n";

    return 0;
}