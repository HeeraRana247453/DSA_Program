/* 
Maximum Occuring Character (it will work for both small and capital characters)
===========================
Given a string str.The task is to find the maximum occuring character in the string str.
If more than one character occurs the maximum number of time then print the character.
 */
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void display(vector<char> str)
{
    for(auto ch:str)
        cout<<ch<<" ";
}

char maxOccurChar(vector<char> str)
{
    map<char,int> m;
    for(auto ch:str)
        m[ch]++;

    int maxi=0;
    char ch;
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second<<"\n";
        if(value.second > maxi)
        {
         maxi = max(maxi,value.second);
         ch = value.first;
        }
    }
    return ch;
}

int main()
{
    // vector<char> str = {'t','h','e',' ','g','r','e','a','t',' ','k','h','a','l','i',' ','i','s',' ','b','a','c','k'};
    vector<char> str = {'h','e','e','r','a',' ','f','r','o','m',' ','h','a','r','y','a','n','a','r'};

    cout<<"\nGiven string is: ";
    display(str);
    cout<<"\n";

    char ch = maxOccurChar(str);
    cout<<"\n'"<<ch<<"' is the maximum occuring character\n";

    return 0;
}

// cin.getline (about_y, MAX_ABOUT_LEN, '$');    //$ is a delimiter