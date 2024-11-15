//**Minimum number of jump**//

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
         int farthest = 0;
    int current = 0;
    int jump = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, arr[i] + i);

        if (i == current) {
            jump++;
            current = farthest;
        }
    }            if (current >= n - 1) {
                return jump;
            }

    return -1; 
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

