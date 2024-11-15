//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
         long long totalSum = accumulate(Arr.begin(), Arr.end(), 0LL);
        
        sort(Arr.rbegin(), Arr.rend());
        
        long long runningSum = 0;
        int count = 0;
        
        for (int i = 0; i < N; i++) {
            runningSum += Arr[i];
            count++;
            if (runningSum > totalSum / 2) {
                return count;
            }
        }
        return N;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends