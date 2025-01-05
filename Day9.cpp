#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getMinDiff(vector<int> &arr, int k)
{
    int n = arr.size();
    if(n == 1)
        return 0;
    sort(arr.begin(), arr.end());        
    int ans = arr[n-1] - arr[0];
    int small= arr[0] + k;
    int larg= arr[n-1] - k;
    if(small>larg)
        swap(small,larg);
    for(int i= 1;i<n-1;i++)
    {
        int sub= arr[i] - k;
        int add= arr[i] + k;   
        if(sub>=small||add<=larg)
            continue;
        if(larg- sub<=add-small)
            small= sub;
        else
            larg= add;
    }    
    return min(ans, larg-small);
}

int main()
{
    int n,k,s;
    cout<<"Enter the size of vector: ";
    cin>>s;
    vector<int> arr;
    cout<<"Enter the heights of the tower: ";
    for(int i=0;i<s;i++)
    {
        cin>>n;
        arr.push_back(n);
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"The minimum difference is: "<<getMinDiff(arr,k);    
}