/* 
567. Permutation in String
==========================
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.

Example 1:
    Input: s1 = "ab", s2 = "eidbaooo"
    Output: true
    Explanation: s2 contains one permutation of s1 ("ba").
Example 2:
    Input: s1 = "ab", s2 = "eidboaoo"
    Output: false
 */
#include<iostream>
using namespace std;

bool checkCount(int count1[],int count2[])
{
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i])
            return false;
    }
    return true;
}

bool permutationInString(string s1,string s2)
{
//Count for s1
    int count1[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    
//First window in s2 and creating count of window elements of size s1 in s2
    int count2[26]={0};
    int windowsize=s1.size();
    int i=0;
    for(    ;i<s2.size() && i<windowsize; i++)
    {
        int index=s2[i]-'a';
        count2[index]++;
    }
    // check the count1[] and count2[] have same element or not
    if(checkCount(count1,count2))
        return 1;

//Check in other windows of size of s1
    while(i<s2.size())
    {   
        int index = s2[i]-'a'; //new character
        count2[index]++;
        // set previous character count to zero so that they cann't compare with s1
        char oldchar = s2[i-windowsize];//previous than curren window element
        index = oldchar - 'a';
        count2[index]--;

        if(checkCount(count1,count2))
            return 1;
        i++;
    }

    return 0;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo"; //Test case-1
    // string s1 = "ab", s2 = "eidboaoo";  //Test case-2
    
    cout<<"\n'"<<s2<<"' have the permutation of '"<<s1<<"' : "<<  permutationInString(s1,s2)<<endl<<endl;

    return 0;
}