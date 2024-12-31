#include<iostream>
#include<vector>
using namespace std;

void revArr(vector<int> &arr, int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(vector<int> &arr,int d)
{
    int s= arr.size();
    d= d % s;
    if(d==0)
        return;
    revArr(arr,0,d-1);
    revArr(arr,d,s-1);
    revArr(arr,0,s-1);
}

int main()
{
    int n,d;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in vector: ";
    for(int x= 0;x<n;x++)
        cin>>arr[x];
    cout<<"Enter the value of d: ";
    cin>>d;
    rotateArr(arr,d);
    cout<<"Vector after rotating in anti-clockwise direction: ";
    for(int x= 0;x<n;x++)
        cout<<arr[x]<<" ";
}