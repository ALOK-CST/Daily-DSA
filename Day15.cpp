#include <bits/stdc++.h>
using namespace std;

string addBinary(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;
    string result = "";
    while(i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if(i >= 0)
        {
            sum += s1[i] - '0';
            i--;
        }
        if(j >= 0)
        {
            sum += s2[j] - '0';
            j--;
        }
        carry = sum > 1 ? 1 : 0;
        sum = sum % 2;
        result += to_string(sum);
    }
    reverse(result.begin(), result.end());
    int start = 0;
    while(start < result.length()-1 && result[start] == '0')
        start++;
    result = result.substr(start);
    return result;
}

int main()
{
    string s1, s2;
    cout << "Enter first binary string: ";
    cin >> s1;
    cout << "Enter second binary string: ";
    cin >> s2;
    string sum = addBinary(s1, s2);
    cout << "Sum of binary strings: " << sum << endl;
}