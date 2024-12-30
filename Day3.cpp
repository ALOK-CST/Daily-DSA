#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int s= arr.size();
    for(int x= 0;x<s/2;x++)
    {
        swap(arr[x],arr[s-x-1]);
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
    reverseArray(arr);
    cout<<"Vector after reversing: ";
    for(int x= 0;x<n;x++)
        cout<<arr[x]<<" ";
}