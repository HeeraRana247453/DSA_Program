// Bubble Sort
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    bool flag=true;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size()-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false)
            break;
    }
}

void display(vector<int> arr)
{
    for(auto value:arr)
        cout<<value<<" ";
}
int main()
{
    vector<int> arr={23,54,90,23,54,67,86,34};

    cout<<"\nThis is the given Array: ";
    display(arr);

    bubbleSort(arr);
    cout<<"\nThis is the sorted Array: ";
    display(arr);
    cout<<"\n";

    return 0;
}