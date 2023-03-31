//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


    class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &arr,int n)
        {
            int pr=0;
            int i;
            for(i=1;i<n;i++)
            {
                if(arr[i]%2!=arr[i-1]%2)
                {
                    sort(arr.begin()+pr,arr.begin()+i,greater<int>());
                    pr=i;
                }
                
            }
            sort(arr.begin()+pr,arr.begin()+i,greater<int>());
            return arr;
            // Code here
        }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends