
/* 
Spiral Matrix
==============
1--2--3--4
         |
5--6--7  8
|     |  |
9 10-11 12
|        |
13-14-15-16

 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    
    vector<int> ans;
    int count =0;
    int total = row*col;
    int startrow = 0;
    int startcol = 0;
    int endrow = row-1;
    int endcol = col-1;

    while(count<total)
    {
        //Starting row
        for(int i=startcol;i<=endcol && count<total;i++){
            ans.push_back(arr[startrow][i]);
            count++;
        }
        startrow++;
        //Ending column
        for(int i=startrow;i<=endrow && count<total;i++){
            ans.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;
        //Ending row
        for(int i=endcol;i>=startcol && count<total;i--){
            ans.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;
        //Start column
        for(int i=endrow;i>=startrow && count<total;i--){
            ans.push_back(arr[i][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

void display(vector<vector<int>> arr){
    for(auto row:arr){
        for(auto col:row)
            cout<<col<<"  ";
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    display(arr);
    vector<int> spiral = spiralMatrix(arr);
    cout<<"\nSpiral Matrix: ";
    for(auto val:spiral)
        cout<<val<<" ";
    cout<<"\n";

    return 0;
}