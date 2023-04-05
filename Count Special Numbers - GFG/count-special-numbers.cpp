//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        map<int,int> mp;
        for(int i=0; i<N; ++i) {
            mp[arr[i]]++;
        }
        int ans=0;
        for(int i=0; i<N; ++i) {
            if(mp[arr[i]]==0) continue;
            for(int j=1; j*j<=arr[i]; ++j) {
                if(arr[i]%j==0) {
                    if(mp[j]>0){
                        if(arr[i]==j and mp[arr[i]]==1) continue;
                        else if(arr[i]==j) {ans++; break;}
                        else {
                            ans+=mp[arr[i]];
                            mp.erase(arr[i]);
                          //  cout<<j<<" "<<arr[i]<<endl;
                            break;
                        }
                    }
                    else if(mp[arr[i]/j]>0) {
                        if(arr[i]/j==arr[i] and mp[arr[i]]==1) continue;
                        else if(arr[i]/j==arr[i]) {ans++; break;}
                        else {
                           // cout<<arr[i]<<" "<<arr[i]/j<<endl;
                            ans+=mp[arr[i]];
                            mp.erase(arr[i]);
                            break;
                        }
                    }
                }
              }
            }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends