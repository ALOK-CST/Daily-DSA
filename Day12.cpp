#include <bits/stdc++.h>
using namespace std;

int maxCircularSubarraySum(vector<int> &arr)
{
    int total_sum = accumulate(arr.begin(), arr.end(), 0);
    int max_sum = arr[0], curr_max = arr[0];
    for(int i= 1;i<arr.size();i++)
    {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_sum = max(max_sum, curr_max);
    }
    int min_sum = arr[0], curr_min = arr[0];
    for(int i= 1;i<arr.size();i++)
    {
        curr_min = min(arr[i], curr_min + arr[i]);
        min_sum = min(min_sum, curr_min);
    }
    if(total_sum==min_sum)
        return max_sum;
    return max(max_sum,total_sum-min_sum);
}

int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Maximum Circular Subarray Sum: " << maxCircularSubarraySum(arr) << endl;
    return 0;
}