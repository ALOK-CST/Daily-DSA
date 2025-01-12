#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int i = 0, n = s.length();
    while(i<n&&isspace(s[i]))
        i++;
    int sign = 1;
    if(i < n && (s[i] == '+' || s[i] == '-'))
    {
        if(s[i] == '-')
            sign = -1;
        i++;
    }
    long long result = 0;
    while(i < n && isdigit(s[i]))
    {
        int digit = s[i] - '0';
        if(result > (INT32_MAX - digit) /10)
            return (sign == 1) ? INT_MAX : INT_MIN;
        result = result * 10 + digit;
        i++;
    }
    return sign * (int)result;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    int convertedNumber = myAtoi(s);
    cout << "Converted Integer: " << convertedNumber << endl;
}