#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string s1, string s2)
{
    if(s1.length() != s2.length())
        return false;
    
    vector<int> count(26, 0);
    for(int i = 0; i < s1.length(); i++)
    {
        char c = s1[i];
        count[c - 'a']++;
    }
    for(int i = 0; i < s2.length(); i++)
    {
        char c = s2[i];
        count[c - 'a']--;
    }
    for(int i = 0; i < count.size(); i++)
    {
        if(count[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if(areAnagrams(s1, s2))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}