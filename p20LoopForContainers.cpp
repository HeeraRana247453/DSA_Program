// For loop for accessing the vector elements and these ways are valid for any container(i.e map,set,list)

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> arr = {3,4,5,1,9,0};

// First way
    int s = arr.size();
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";

// Second way
    vector<int>::iterator itr;  //we can also replace it with auto during declaration in the for loop
    for(itr=arr.begin();itr!=arr.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\n\n";

// Third way
    for(int value:arr)//It takes the copy of value from the vector array (means it cann't change the actual value of vector array)
    {   
        cout<<value<<" ";
        value++;//will not change the actual value
    }
    cout<<"\n\n";

// Fourth way
    for(int &value:arr)//by referencing, we can access the actual value (means we can change the actual value)
    {
        cout<<value<<" ";
        value++;//will change the actual value
    }
    cout<<"\n\n";

    for(int value:arr)
        cout<<value<<" ";
    cout<<"\n\n";

// Fifth way(for vector pair)
    vector<pair<int,int>>  vp={{2,4},{4,5},{9,3}};
    for(pair<int,int>  &value:vp)  //we can also use 'auto' in place of 'pair<int,int>'
        cout<<value.first<<","<<value.second<<endl;
    cout<<"\n\n";

// Sixth way (Using the 'auto' keyword)
    for(auto &value:arr)         //we can replace the data type with auto
        cout<<value<<" ";
    cout<<"\n\n";


    return 0;
}