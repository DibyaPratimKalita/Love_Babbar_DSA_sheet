//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getCount(int n) {
        // Your code goes here
         if (n == 1) return 10;

        vector<vector<int>> moves = {
            {0, 8},       // from 0 you can go to 0 and 8
            {1, 2, 4},    // from 1 you can go to 1, 2, 4
            {2, 1, 3, 5}, // from 2 you can go to 2, 1, 3, 5
            {3, 2, 6},    // from 3 you can go to 3, 2, 6
            {4, 1, 5, 7}, // from 4 you can go to 4, 1, 5, 7
            {5, 2, 4, 6, 8}, // from 5 you can go to 5, 2, 4, 6, 8
            {6, 3, 5, 9}, // from 6 you can go to 6, 3, 5, 9
            {7, 4, 8},    // from 7 you can go to 7, 4, 8
            {8, 0, 5, 7, 9}, // from 8 you can go to 8, 0, 5, 7, 9
            {9, 6, 8}     // from 9 you can go to 9, 6, 8
        };

        vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));
        for (int j = 0; j <= 9; ++j) {
            dp[1][j] = 1;
        }

        for (int len = 2; len <= n; ++len) {
            for (int digit = 0; digit <= 9; ++digit) {
                dp[len][digit] = 0;
                for (int move : moves[digit]) {
                    dp[len][digit] += dp[len - 1][move];
                }
            }
        }

        long long result = 0;
        for (int digit = 0; digit <= 9; ++digit) {
            result += dp[n][digit];
        }

        return result;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends