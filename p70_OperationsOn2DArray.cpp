

#include<iostream>
using namespace std;

void display(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void search(int arr[][3],int row,int col,int key)
{
    int flag = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key)
               flag = 1; 
        }
    }
    if(flag==1)
        cout<<"\nYes, "<<key<<" is present in the Array\n";
    else
        cout<<"\nNo, "<<key<<" is not present in the Array\n";
}

void rowSumDisplay(int arr[][3],int row,int col)
{   int maxi = __WINT_MIN__;
    int maxrow;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"\n"<<sum;
        if(sum>maxi){
            maxi = sum;
            maxrow=i;
        }
    }
    cout<<"\nMaximum sum row index: "<<maxrow<<endl;
}
void colSumDisplay(int arr[][3],int row,int col)
{   int maxi = __WINT_MIN__;
    int maxcol;
    for(int j=0;j<3;j++){
        int sum = 0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
        if(sum>maxi){
            maxi=sum;
            maxcol = j;
        }
    }
    cout<<"\nMaximum sum col index: "<<maxcol<<endl;
}

int main()
{
// Created 2D-Array
    int arr[3][3];
    cout<<"\nEnter the elements in the array: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
// Print 2D-Array
    cout<<"\n2D Array: \n";
    display(arr,3,3);
    cout<<"\n";

// Linear Search in 2D-Array
    int key;cout<<"\nEnter the search element: ";cin>>key;
    search(arr,3,3,key);

// print the sum of rows and find the greatest row sum
cout<<"\nSum of Row :-";
    rowSumDisplay(arr,3,3);

// print the sum of column and find the greatest col sum
cout<<"\nSum of Column :-\n";
    colSumDisplay(arr,3,3); cout<<"\n";



    return 0;
}