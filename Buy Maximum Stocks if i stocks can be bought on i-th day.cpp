//****Buy Maximum Stocks if i stocks can be bought on i-th day****//

//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
    class Comp
    {
public:
 bool operator()(pair<int, int> &a, pair<int, int> &b)
        {
            return a.first > b.first;
        }
    };
    int buyMaximumProducts(int n, int k, int price[]){
         priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;
        for (int i = 0; i < n; i++)
            pq.push({price[i], i + 1});
    
        int stocks = 0;
        while (!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
    
            int cost = p.first, count = p.second;
            while (count--)
            {
                if (k >= cost)
                {
                    stocks++;
                    k -= cost;
                }
                else
                    break;
            }
        }
    
        return stocks;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends