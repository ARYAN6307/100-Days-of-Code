//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        int n= S.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int cntl=0;
            int cntu=0;
            for(int j=i;j<n;j++){
                if(S[j]>='a' and S[j]<='z') cntl++;
                else cntu++;
                if(cntl == cntu) cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends