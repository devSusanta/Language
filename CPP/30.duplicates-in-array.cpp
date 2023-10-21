//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
  //function to find duplcate in an array
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> dup;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++){
                if (arr[i] == arr[j]){
                    auto it = find(dup.begin(),dup.end(), arr[i]);
                    if (it != dup.end()){
                        break;
                    }else{
                        dup.push_back(arr[i]);
                    }
                }
            }
        }
        if(dup.empty()){
            return {-1};
        }else{
            sort(dup.begin(), dup.end());
            return dup;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // cin >> t;
    // while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    // }
    return 0;
}

// } Driver Code Ends