/* 
48. Rotate Image
=================
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
 DO NOT allocate another 2D matrix and do the rotation.
                     5  1  9  11
                     2  4  8  10
                    13  3  6   7
                    15 14 12  16
 */
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    // Transpose a matrix
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++)
            swap(matrix[i][j],matrix[j][i]);
    }

    // Swap columns
    for(int j=0;j<col/2;j++){
        for(int i=0;i<row;i++)
            swap(matrix[i][j],matrix[i][col-1-j]);
    }
}

void display(vector<vector<int>> matrix){
    for(auto row:matrix){
        for(auto col:row)
            cout<<col<<" ";
        cout<<endl;
    }
}

int main(){
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    
    cout<<"\nOriginal Matrix: \n";
    display(matrix);
//Rotate Matrix
    rotate(matrix);
    cout<<"\nRotated Matrix: \n";
    display(matrix);
    return 0;
}