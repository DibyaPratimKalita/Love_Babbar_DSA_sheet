//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
         int minLength = n + 1;
        int start = 0, end = 0, current_sum = 0;

        while (end < n) {
            while (current_sum <= x && end < n) {
                current_sum += arr[end++];
            }

            while (current_sum > x && start < n) {
                if (end - start < minLength) {
                    minLength = end - start;
                }
                current_sum -= arr[start++];
            }
        }

        return (minLength == n + 1) ? 0 : minLength;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends           