//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
         sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int n = arr.size();
        int i = 0, j = 0;
        int platform_needed = 0, max_platforms = 0;

        // Use two pointers to traverse through both sorted arrays
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                // A train is arriving before the previous one departs
                platform_needed++;
                i++;
            } else {
                // A train departs, freeing up a platform
                platform_needed--;
                j++;
            }
            // Update the maximum number of platforms needed
            max_platforms = max(max_platforms, platform_needed);
        }

        return max_platforms;
    }
};


//{ Driver Code Starts.
//  Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> dep(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int j = 0; j < n; j++) {
            cin >> dep[j];
        }
        Solution ob;
        cout << ob.findPlatform(arr, dep) << endl;
    }
    return 0;
}
// } Driver Code Ends