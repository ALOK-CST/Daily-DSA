#include <bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string s)
{
    int n = s.length();
    vector<int> count(26, 0);
    for(int i = 0; i < n; i++)
        count[s[i] - 'a']++;
    for(int i = 0; i < n; i++)
    {
        if(count[s[i] - 'a'] == 1)
            return s[i];
    }
    return '$';
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin >> s;
    char res = nonRepeatingChar(s);
    if(res == '$')
        cout << "-1\n";
    else
        cout << res << "\n";
}