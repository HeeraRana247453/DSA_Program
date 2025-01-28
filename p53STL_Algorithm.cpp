// Algorithmic Functions

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

//Binary Search
    int key=30;
    bool found=binary_search(arr.begin(), arr.end(), key);

    cout<<"\nFinding 30 using binary search: "<< found;

// Upper bound and lower bound
    cout<<"\nLower bound: "<<lower_bound(arr.begin(), arr.end(), 30) - arr.begin();       //does not compare less than val.
    cout<<"\nUpper bound: "<<upper_bound(arr.begin(), arr.end(), 30) - arr.begin()<<"\n";  //compares greater than val.

// Maximum and minimum
    cout<<"\nMaximum : "<<max(arr[0],arr[4]);
    cout<<"\nMinimum : "<<min(arr[0],arr[4])<<endl;

// Reverse function
    reverse(arr.begin(),arr.end());
    cout<<"\nAfter reverse:-\narr- ";
    for(auto value:arr)
        cout<<value<<" ";
    cout<<"\n\n";

    string str = "ABCD";
    reverse(str.begin(),str.end());
    cout<<"\nAfter reverse:-\nstr: "<<str<<endl;

// Rotate function
     rotate(arr.begin(), arr.begin()+2, arr.end());
     cout<<"\nRotated by two elments: ";
     for(auto value:arr)
            cout<<value<<" ";
    cout<<"\n";

// Sort function (based on Intro-sort which composed of Quick sort,Heap sort,Insertion sort)
    sort(arr.begin(),arr.end());
    cout<<"\nAfter Sort: ";
     for(auto value:arr)
            cout<<value<<" ";
    cout<<"\n\n";

    return 0;
}
