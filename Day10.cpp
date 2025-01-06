#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int sum = INT_MIN;
    int curr= 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr = max(arr[i], curr + arr[i]);
        sum = max(sum, curr);
    }
    return sum;
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
        cin>>x;
        arr.push_back(x);
    }
    cout << "Maximum Subarray Sum: " << maxSubarraySum(arr) << endl;
}
