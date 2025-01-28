/*
443. String Compression
========================
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
    If the group's length is 1, append the character to s.
    Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars.
 Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.
 */


//First Approach (my approach)   //for better Approach watch lovebabbar l-22 (1:40:00)
#include <iostream>
#include <vector>
using namespace std;

int stringCompression(vector<char> &s)
{
    int i = 0;
    while (i < s.size())
    {
        int count = 1;
        int j = i + 1;
        while (j < s.size() && s[i] == s[j])
        {
            count++;
            j++;
        }

        cout << "\ncount: " << count << endl;

        if (count == 1)
            i++;
        else if (count == 2)
        {
            char ch = '0' + count;
            s[i + 1] = ch;
            i = i + 2;
        }
        else if (count > 2 && count < 10)
        {
            s.erase(s.begin() + i + 2, s.begin() + i + count);
            char ch = '0' + count;
            s[i + 1] = ch;
            i = i + 2;
        }
        else if (count > 9 && count < 100)
        {
            s.erase(s.begin() + i + 3, s.begin() + i + count);
            char ch2 = '0' + (count % 10);
            count = count / 10;
            char ch1 = '0' + (count % 10);
            s[i + 2] = ch2;
            s[i + 1] = ch1;
            i = i + 3;
        }
        else if (count > 99 && count < 999)
        {
            s.erase(s.begin() + i + 4, s.begin() + i + count);
            char ch3 = '0' + (count % 10);
            count = count / 10;
            char ch2 = '0' + (count % 10);
            count = count / 10;
            char ch1 = '0' + (count % 10);
            s[i + 3] = ch3;
            s[i + 2] = ch2;
            s[i + 1] = ch1;
            i = i + 4;
        }
        else if (count > 999)
        {
            s.erase(s.begin() + i + 5, s.begin() + i + count);
            char ch4 = '0' + (count % 10);
            count /= 10;
            char ch3 = '0' + (count % 10);
            count = count / 10;
            char ch2 = '0' + (count % 10);
            count = count / 10;
            char ch1 = '0' + (count % 10);
            s[i + 4] = ch4;
            s[i + 3] = ch3;
            s[i + 2] = ch2;
            s[i + 1] = ch1;
            i = i + 5;
        }
        cout << "\nstr: ";
        for (int k = 0; k < s.size(); k++)
        {
            cout << s[k];
        }
    }
    return s.size();
}

int main()
{
    // vector<char> str = {'a','a','b','b','c','c','c'};

    vector<char> str = {'a','c','c'};

    for(int i=0;i<1000;i++)
        str.push_back('b');

    int compressedlen = stringCompression(str);
    cout << "\nNew Length: " << compressedlen << endl;

    return 0;
}