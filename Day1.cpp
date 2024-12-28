class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int max = INT_MIN, secMax = INT_MIN;
        int s = arr.size();
        for (int x = 0; x < s; x++)
        {
            if (arr[x] > max)
            {
                secMax = max;
                max = arr[x];
            }
            else if (arr[x] > secMax && arr[x] < max)
                secMax = arr[x];
        }
        if (secMax == INT_MIN)
            return -1;
        else
            return secMax;
    }
};