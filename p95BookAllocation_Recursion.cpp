/* 
 Problem statement
==================
Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
There are ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
If the allocation of books is not possible, return -1.

Example:
        Input: ‘n’ = 4 ‘m’ = 2 
        ‘arr’ = [12, 34, 67, 90]
        Output: 113
        Explanation: All possible ways to allocate the ‘4’ books to '2' students are:
            12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

            12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

            12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

We are getting the minimum in the last case.
Hence answer is ‘113’.
*/

// Create a search space 
// Apply Binary Search

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid,int totalSum,int student,int res)
{
    if(n<1)
        return true;
    
    if(totalSum + arr[0]<=mid)
    {
        totalSum=totalSum + arr[0];
        res = isPossible(arr+1,n-1,m,mid,totalSum,student,res);
    }
    else{
        student++;
        if(student>m || arr[0]>mid) 
            return false;
        else{
            totalSum=arr[0];
            res = isPossible(arr+1,n-1,m,mid,totalSum,student,res);
        }
    }
    return res;
}

int bookAllocate(int arr[],int n,int m,int low,int high,int ans)
{
    if(low>high)
        return ans;  //memoization

    int mid=low+(high-low)/2;

    if(isPossible(arr,n,m,mid,0,1,1))
        ans = bookAllocate(arr,n,m,low,mid-1,mid);  //ans = mid  (memoization)
    else
        ans = bookAllocate(arr,n,m,mid+1,high,ans);
    return ans;
}

int bookAllocation(vector<int> &arr,int n,int m)
{
    int low=0;
    int high;
    int totalSum=0;
    int ans=-1;

    for(auto value:arr)
        totalSum+=value;
    high=totalSum;

    int *array = new int[arr.size()];//Dynamicaly created new array
    copy(arr.begin(),arr.end(),array);//copy vector array to int array


    if(m>n)
        return ans;
    int maxMinPage = bookAllocate(array,n,m,low,high,ans);
    delete[] array;  //clean up the dynamically allocated array, to avoid memory leak
    return maxMinPage;
}

int main()
{
    // vector<int> arr={12, 34, 67, 90};    //Test case-1
    // int bookNum=4;
    // int stu=2;
    // vector<int> arr={5};                 //Test case-2
    vector<int> arr = {25, 46, 28, 49, 24}; //Test case-3
    int bookNum=5;
    int stu=4;

    int maxMinmumPages = bookAllocation(arr,bookNum,stu);
    cout<<"\nMaximum No. of Pages alloted to a student out of all the student, minimum possible is: "<<maxMinmumPages<<endl<<endl;

    return 0;
}