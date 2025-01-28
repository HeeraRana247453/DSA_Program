/* 
 Problem statement

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

//if all the books allocated to the students, whether to few students or to all student, in both condition case is possible
bool isPossible(vector<int> arr,int n,int m,int mid)
{   cout<<"\n";
    int student=1;
    int sumPages=0;
    for(int i=0;i<n;i++)  //it will ensure all the pages of the books allocate to the student
    {
        if(sumPages+arr[i]<=mid)  
        {
            sumPages=sumPages+arr[i];//adding pages of book 'i' for one student
        }
        else{
                student++;
                if(student>m || arr[i]>mid)
                {   cout<<"notpossible";
                    return false;
                }
                else{
                cout<<sumPages<<" ";
                   sumPages=arr[i];  //start allocating books pages to the new student
                }
        }
    }
    cout<<"possible";
    return true;//if all the pages allocated to all the student, then the case is possible
}

int bookAllocation(vector<int> arr,int n,int m){
    int low=0;
    int high;
    int mid;
    int totalSum=0;
    int ans=-1;

    if(m>n)
        return ans;
    
    for(auto value:arr)
        totalSum=totalSum+value;
        
    high=totalSum;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=mid; //memoization
            high=mid-1; //if case is possible then try to find minimum possible
        }
        else{
            low=mid+1;
            }
    }
    return ans;
}

int main(){
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