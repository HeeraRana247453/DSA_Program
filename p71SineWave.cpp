
/* 
Print Like A Wave:-
===================
 Problem statement
            For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, 
            i.e., print the first column top to bottom, next column bottom to top, and so on.
For eg:-
    The sine wave for the matrix:-
    1 2
    3 4
    will be [1, 3, 4, 2].
 */

#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> arr)
{
    for(auto row:arr){
        for(auto col:row)
            cout<<col<<" ";
        cout<<"\n";
    }
}

vector<int> sineWave(vector<vector<int>> &arr,int nRows,int mCols)
{
    vector<int> ans;
    for(int j=0;j<mCols;j++){
        if(!(j&1)){
          for (int i = 0; i < nRows; i++)
            ans.push_back(arr[i][j]);} 
        else{
          for (int i = nRows - 1; i >= 0; i--)
            ans.push_back(arr[i][j]);}
    }
    return ans; 
}

int main()
{
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    display(arr);

    vector<int> sinevec = sineWave(arr,3,4);
    cout<<"\nSine Wave: ";
    for(auto val:sinevec)
        cout<<val<<" ";
    cout<<"\n";

    return 0;
}