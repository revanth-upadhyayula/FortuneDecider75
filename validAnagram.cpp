#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    vector<int> arr(26, 0);
    for (char ch : s)
    {
        arr[ch - 'a']++;
    }
    for (char ch : t)
    {
        arr[ch - 'a']--;
        if (arr[ch - 'a'] < 0)
            return false;
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}