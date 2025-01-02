#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void Sort(vector<int> &res)
{
    if(res.size()==0)
        return;
    for (int x= 0;x<res.size()-1;x++)
    {
        for (int y= x+1;y<res.size();y++)
        {
            if (res[x]>res[y])
            {
                int temp= res[x];
                res[x]= res[y];
                res[y]= temp;
            }
        }
    }
}

vector<int> findMajority(vector<int> &arr)
{
    vector<int> res;
    int n= arr.size();
    int c1= 0,c2= 0;
    int fst= INT_MAX,sec= INT_MAX;
    for(int x= 0;x<n;x++)
    {
        if (fst== arr[x])
            c1++;
        else if (sec==arr[x])
            c2++;
        else if(c1== 0)
        {
            fst= arr[x];
            c1++;
        }
        else if(c2== 0)
        {
            sec= arr[x];
            c2++;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1= 0;
    c2= 0;
    for(int x= 0;x<n;x++)
    {
        if (arr[x]==fst)
            c1++;
        else if(arr[x]==sec)
            c2++;
    }
    if(c1>n/3)
        res.push_back(fst);
    if (c2>n/3)
        res.push_back(sec);
    return res;
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
    vector<int>res= findMajority(arr);
    Sort(res);
    cout<<"Majority elements in vector: ";
    if(res.size()==0)
        cout<<"[]";
    else
    {
        for(int x= 0;x<res.size();x++)
            cout<<res[x]<<" ";
    }
}