#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int max = INT_MIN, secMax = INT_MIN;
    int s = arr.size();
    for(int x = 0; x < s; x++)
    {
        if (arr[x] > max)
        {
            secMax = max;
            max = arr[x];
        }
        else if(arr[x] > secMax && arr[x] < max)
            secMax = arr[x];
    }
    if(secMax == INT_MIN)
        return -1;
    else
        return secMax;
}

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in vector: ";
    for(int x= 0;x<n;x++)
        cin>>arr[x];
    int secLarg= getSecondLargest(arr);
    if(secLarg==-1)
        cout<<"Second largest element does not exist.";
    else
        cout<<"Second largest element is: "<<secLarg;
}