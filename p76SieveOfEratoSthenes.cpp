/* 
204. Count Primes
==================
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
    Input: n = 10
    Output: 4
    Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:
    Input: n = 0
    Output: 0
Example 3:
    Input: n = 1
    Output: 0
 */
#include<iostream>
#include<vector>
using namespace std;

//Approach (Sieve of Eratosthenes)
int countPrime(int n)
{
    int count=0;
    vector<bool> prime(n+1,true); //n+1 because it will produce error on n=0; while it should give count=0;
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
            count++,cout<<i<<endl;
            for(int j=2*i;j<n;j=j+i) //multiple of i will become false(not prime)
                prime[j]=0;
    }
    return count;
}

int main()
{
    int n;cout<<"\nEnter the number: ";cin>>n;
    
    int count = countPrime(n);
    cout<<"\nNumber of prime number is : "<<count<<endl;
    return 0;
}

/* 
Time Complexity
---------------

TC = N*((N/2)+(N/3)+(N/4)+(N/5)+.....);
TC = O( n*(log(log n)) );

 */