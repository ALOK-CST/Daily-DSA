#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int n = arr.size();    
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    int size = j;
    for(int i = 0; i < size; i++)
    {
        int val = abs(arr[i]);
        if(val-1 < size && arr[val-1] > 0)
            arr[val-1] = -arr[val-1];
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
            return i + 1;
    }
    return size + 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Smallest Missing Positive Number: " <<missingNumber(arr) << endl;
}