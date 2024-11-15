//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int n = str1.size();
        int m = str2.size();
        unordered_map <char,char> res1;
        unordered_set <char> res2;
        if(n != m)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(res1.find(str1[i]) != res1.end())
            {
                if(res1[str1[i]] != str2[i])   
                    return 0;
            }
            else
            {
                if(res2.find(str2[i]) != res2.end())
                    return 0;
                else 
                {
                    res1[str1[i]] = str2[i];
                    res2.insert(str2[i]);
                }    
            }    
        }
        return 1;
    
    }
};


//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends