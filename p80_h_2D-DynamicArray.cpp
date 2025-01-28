
#include<iostream>
using namespace std;

int main()
{
    int row;cout<<"\nEnter the no. of rows: ";cin>>row;
    int col;cout<<"\nEnter the no. of columns: ";cin>>col;

//Creating 2D-Array Dynamically
    int **arr = new int*[row];
    for(int i=0;i<row;i++)
        arr[i] = new int[col];


//taking input
    cout<<"\nEnter the values in 2D-Array: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

//Output
    cout<<"\nThis is 2D-Array: \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

//Deallocation of Dynamic memory is necessay
    for(int i=0;i<row;i++)
        delete []arr[i];  //it will delete subarrays

    delete []arr; //it will delete main array

    return 0;
}