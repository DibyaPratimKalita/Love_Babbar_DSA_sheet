//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	     vector<int> positive;
        vector<int> negative;
        
        // Separate +ve ru -ve numbers
        for (int i = 0; i < n; ++i) {
            if (arr[i] >= 0) {
                positive.push_back(arr[i]);
            } else {
                negative.push_back(arr[i]);
            }
        }
        
        int posIndex = 0, negIndex = 0, i = 0;
        
        // Merge +ve ru -ve numbers alternately
        while (posIndex < positive.size() && negIndex < negative.size()) {
            if (i % 2 == 0) {
                arr[i] = positive[posIndex++];
            } else {
                arr[i] = negative[negIndex++];
            }
            ++i;
        }
        
        // Add baki +ve numbers if any
        while (posIndex < positive.size()) {
            arr[i++] = positive[posIndex++];
        }
        
        // Add baki -ve numbers if any
        while (negIndex < negative.size()) {
            arr[i++] = negative[negIndex++];
        }
    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends