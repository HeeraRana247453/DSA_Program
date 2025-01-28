/* 
74. Search a 2D Matrix
=======================
You are given an m x n integer matrix matrix with the following two properties:
    Each row is sorted in non-decreasing order.
    The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
             ---         ---
             |  1  3  5  7 |
             | 10 11 16 20 |
             | 23 30 34 60 |
             ---         ---
 */


// Approach Search in 2D Matrix using Binary Search
#include<iostream>
#include<vector>
using namespace std;

pair<int,int> searchInMatrix(vector<vector<int>> &matrix,int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row*col-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        int element = matrix[mid/col][mid%col];
        if(element==target)
            return {mid/col,mid%col};
        else if(element>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return {-1,-1};
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int key;cout<<"\nEnter the search element: ";cin>>key;
    pair<int,int> index = searchInMatrix(matrix,key);

    if(index.first==-1)
        cout<<"\nTarget element "<<key<<" not found\n";
    else
        cout<<"\nTarget element "<<key<<" is present at matrix["<<index.first<<"]["<<index.second<<"]"<<endl;

    return 0;
}