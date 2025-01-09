#include <bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int> &arr)
{
    if (arr.empty())
        return 0;
    long long max_prod = arr[0];
    long long min_prod = arr[0];
    long long result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(max_prod, min_prod);
        }
        max_prod = max((long long)arr[i], max_prod * arr[i]);
        min_prod = min((long long)arr[i], min_prod * arr[i]);
        result = max(result, max_prod);
    }
    return (int)result;
}

int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Maximum Subarray Product: " << maxProduct(arr) << endl;
}