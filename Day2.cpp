#include<iostream>
#include<vector>
using namespace std;

void pushZerosToEnd(vector<int>&arr)
{
    int s= arr.size();
    int ptr= 0;
    for(int x= 0;x<s;x++)
    {
        if(arr[x]!=0)
        {
            swap(arr[x],arr[ptr]);
            ptr++;
        }
    }
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
    pushZerosToEnd(arr);
    cout<<"Vector after pushing zeros to end: ";
    for(int x= 0;x<n;x++)
        cout<<arr[x]<<" ";
}