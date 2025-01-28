// Selection Sort
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
void display(vector<int> arr)
{   
    for(auto value:arr)
        cout<<value<<" ";
}

int main()
{
    vector<int> arr={23,53,64,36,69,4,86,56};
    
    cout<<"\nThis is the given Array: ";
    display(arr);

    selectionSort(arr);
    cout<<"\n\nThis is the sorted Array: ";
    display(arr);
    cout<<"\n";
    return 0;
}