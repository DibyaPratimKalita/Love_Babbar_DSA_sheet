//****Trapping Rain Water****//

#include<bits/stdc++.h>

using namespace std;
class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int l = 0, r = n-1 ;
        int left = arr[l++], right = arr[r--] ;
        long long ans = 0 ;
        while(l<=r) {
            if(left<=right) {
                while(arr[l]<left) {
                    ans += left-arr[l++] ;
                }
                left = arr[l++] ;
            }
            else {
                while(arr[r]<right) {
                    ans += right-arr[r--] ;
                }
                right = arr[r--] ;
            }
        }
        return ans ;
    }
};
int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
