/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Example 1:
    Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
    Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:
    Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
    Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]] 
*/


#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    void zeroRow(vector<vector<int>>&matrix,int i,int j,int s1,int s2)
    {
        for(int b=0;b<s2;b++)
        {   
            if(matrix[i][b]==0)
                continue;
            matrix[i][b]=-32525379;
        }
        for(int a=0;a<s1;a++)
        {
            if(matrix[a][j]==0)
                continue;
            matrix[a][j]=-32525379;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int s1=matrix.size();   //size of column
        int s2=matrix[0].size();//size of subarray(size of row)
        for(int i=0;i<s1;i++)
        {
            for(int j=0;j<s2;j++)
            {
                if(matrix[i][j]==0)
                    zeroRow(matrix,i,j,s1,s2);
            }
        }
        for(int i=0;i<s1;i++)
        {
            for(int j=0;j<s2;j++)
            {
                if(matrix[i][j]==-32525379)
                    matrix[i][j]=0;
            }
        }
    }

    void display(vector<vector<int>>&m)
    {
        for(auto row:m){
            for(auto col:row){
                cout<<col<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Solution s1;
    vector<vector<int>> m={{0,1,1,0},{1,3,1,1},{1,1,1,1}};
    s1.setZeroes(m);
    s1.display(m);
    return 0;
}