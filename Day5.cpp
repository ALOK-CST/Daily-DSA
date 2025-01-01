#include<iostream>
#include<vector>
using namespace std;

void revArr(vector<int> &arr,int start,int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(vector<int> &arr)
{
    int n= arr.size();
    int i= n-2;
    while(i>=0&&arr[i]>=arr[i+1])
        i--;
    if(i>=0)
    {
        int j= n-1;
        while(arr[j]<=arr[i])
            j--;
        swap(arr[i],arr[j]);
    }
    revArr(arr, i + 1, n - 1);
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
    nextPermutation(arr);
    cout<<"Next permutation of vector: ";
    for(int x= 0;x<n;x++)
        cout<<arr[x]<<" ";
}