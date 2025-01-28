/*  Problem statement
        You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
        There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
For example:
        Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note : A duplicate number is always present in the given array */

/* Sample Input 1:
                2
                5
                4 2 1 3 1
                7
                6 3 1 5 4 3 2
Sample Output 1:
                1
                3
Explanation of sample input 1:
                        For the first test case, 
                        The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

                        For the second test case,
                        The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.

Sample Input 2:
                2
                6 
                5 1 2 3 4 2  
                9
                8 7 2 5 4 7 1 3 6
Sample Output 2:
                2
                7 */


#include<iostream>
#include<vector>
#include<map>
using namespace std;



// optimized & and valid to the given question
int findDuplicate(vector<int> &arr)
{   int res=0;

    // XOR ing all the elements of the array
    for(int i=0;i<arr.size();i++)
        res = res ^ arr[i];
    
    // XOR res with 1 to (N-1)
    for(int i=1;i<arr.size();i++)
        res = res ^ i;
    return res;
}

int main()
{
    vector<int> arr = {6,3,1,5,4,3,2};
    cout<<"\nDuplicate is: "<<findDuplicate(arr)<<endl;
    return 0;
}