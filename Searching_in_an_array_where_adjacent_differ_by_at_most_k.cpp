//{ Driver Code Starts
// C++ program to search an element in an array
// where difference between all elements is 1
#include <bits/stdc++.h>
using namespace std;

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k);

// Driver program to test above function
int main() {
    int t, n, k, x;
    cin >> t;
    while (t--) {

        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> x;
        cout << search(arr, n, x, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k) {
    // Complete the function
     int i = 0;
    while (i < n) {
        // Check if the current element is the target
        if (arr[i] == x) {
            return i;
        }
        // Calculate the minimum jump based on the difference and k
        int jump = max(1, abs(arr[i] - x) / k);
        i += jump;
    }
    return -1; // If element is not found
}

