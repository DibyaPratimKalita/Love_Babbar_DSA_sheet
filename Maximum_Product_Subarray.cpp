//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
         int n = arr.size();
        if (n == 0) return 0;

        int maxProduct = arr[0];
        int currMax = arr[0], currMin = arr[0];

        for (int i = 1; i < n; ++i) {
            // When a negative number is encountered, swap currMax and currMin
            if (arr[i] < 0) {
                swap(currMax, currMin);
            }

            // Update currMax and currMin
            currMax = max(arr[i], currMax * arr[i]);
            currMin = min(arr[i], currMin * arr[i]);

            // Update the result with the maximum product found so far
            maxProduct = max(maxProduct, currMax);
        }
        
        return maxProduct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends