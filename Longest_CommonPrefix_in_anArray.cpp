//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
         if (N == 0) return "-1";

        string prefix = arr[0];
        for (int i = 1; i < N; ++i) {
            int j = 0;
            while (j < prefix.length() && j < arr[i].length() && prefix[j] == arr[i][j]) {
                ++j;
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) return "-1";
        }
        return prefix;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// } Driver Code Ends