/* Intersection of two sorted arrays.
 Problem statement
            You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively.
             Both these arrays are sorted in non-decreasing order.
             You have to find the intersection of these two arrays.
            Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
Note :
    1. The length of each array is greater than zero.
    2. Both the arrays are sorted in non-decreasing order.
    3. The output should be in the order of elements that occur in the original arrays.
    4. If there is no intersection present then return an empty array. */



#include<iostream>
#include<vector>
using namespace std;

// Using Two pointer approach
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  vector<int> arr;
	int i=0,j=0;
    while (i < n && j < m)
    {
      if (arr1[i] < arr2[j])   //Both array sorted in increasing order
        i++;
      else if(arr1[i] == arr2[j])
      {
        arr.push_back(arr1[i]);
        i++;
        j++;
      } 
      else 
        j++;
    }
    return arr;
}

void display(vector<int>arr){
    for(int value:arr){
        cout<<value<<" ";
    }
}

int main()
{
    vector<int> arr1 = {1,2,2,2,3,4};
    vector<int> arr2 = {2,2,3,3};
    vector<int> arr3;

    cout<<"\nArray1:- ";
    display(arr1);
    cout<<"\nArray2:- ";
    display(arr2);

    arr3 = findArrayIntersection(arr1,5,arr2,9);
    cout<<"\nIntersection Array:- ";
    display(arr3);
    cout<<"\n\n";

    return 0;
}