/* 
240. Search a 2D Matrix II
============================
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
    Integers in each row are sorted in ascending from left to right.
    Integers in each column are sorted in ascending from top to bottom.
                            1  4  7 11 15
                            2  5  8 12 19
                            3  6  9 16 22
                           10 13 14 17 24
                           18 21 23 26 30 
 */
#include<iostream>
#include<vector>
using namespace std;

// First Approach
pair<int,int>  searchInMatrix_1(vector<vector<int>> &matrix,int key)
{
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i=0;i<row;i++){
        if(matrix[i][col-1]==key)
            return {i,col-1};
        else if(matrix[i][col-1]>key){
            for(int j=col-2;j>=0;j--){
                if(matrix[i][j]==key)
                    return {i,j};
            }
        }
    }
    return {-1,-1};
}

// Second Approach (Optimized)
pair<int,int> searchInMatrix_2(vector<vector<int>> &matrix,int key){
    int row = matrix.size();
    int col = matrix[0].size();
    int i=0,j=col-1;
    while(i<row && j>=0){
        if(matrix[i][j]==key)
            return {i,j};
        else if(matrix[i][j]>key)
            j--;
        else
            i++;
    }
    return {-1,-1};    
}

int main()
{
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    int key;cout<<"\nEnter the target element to search: ";cin>>key;

    pair<int,int> index= searchInMatrix_2(matrix,key);
    if(index.first==-1)
        cout<<"\nTarget element "<<key<<" not found\n";
    else
        cout<<"\nTarget element "<<key<<" is present at matrix["<<index.first<<"]["<<index.second<<"]"<<endl;

    return 0;
}