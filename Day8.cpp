#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;
    int min_price= INT_MAX;
    int max_profit= 0;
    for (int i= 0;i<prices.size();i++)
    {
        int price= prices[i];
        if(price<min_price)
            min_price= price;
        else
        {
            int profit= price-min_price;
            if (profit>max_profit)
            {
                max_profit= profit;
            }
        }
    }
    return max_profit;
}

int main()
{
    int n;
    cout<<"Enter total number of days: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"The maximum profit is: 0"<<endl;
        return 0;
    }
    vector<int> prices(n);
    cout<<"Enter the cost of stock on each day: ";
    for(int x= 0;x<n;x++)
        cin>>prices[x];
    int profit= maximumProfit(prices);
    cout<<"The maximum profit is: "<<profit<<endl;
}