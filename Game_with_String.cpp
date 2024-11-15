//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<int,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int, int>>pq;
        for(auto it:mp)
        {
            pq.push({it.second, it.first});
        }
        while(k--)
        {
            int num = pq.top().second;
            int f=pq.top().first;
            pq.pop();
            f=f-1;
            if(f!=0)
            {
                pq.push({f,num});
            }
        }
        int sum=0;
        while(!pq.empty())
        {
            int f=pq.top().first;
            pq.pop();
            sum+=(f*f);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;

        Solution ob;
        cout << ob.minValue(s, k) << "\n";
    }
    return 0;
}
// } Driver Code Ends