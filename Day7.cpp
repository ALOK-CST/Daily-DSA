#include <iostream>
#include <vector>
using namespace std;

int findMax(int a, int b)
{
    return a>b?a:b;
}

int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    if(n==0)
        return 0;
    int profit= 0;
    for(int x= 1;x<n;x++)
    {
        if(prices[x]>prices[x-1])
            profit += prices[x]-prices[x-1];
    }
    return profit;
}

int main()
{
    int n;
    cout<<"Enter total no of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the cost of stock on each day: ";
    for(int x= 0;x<n;x++)
        cin>>prices[x];
    cout<<"The maximum profit is: "<<maximumProfit(prices)<<endl;
}