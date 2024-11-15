#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
       map<int,int>mp;
       for(int i=0;i<size;i++){
           mp[a[i]]++;
       }
       int num=ceil(size/2);
       for(auto i:mp){
           if(i.second>num){
               return i.first;
           }
       }
       return -1;
    }
};
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
