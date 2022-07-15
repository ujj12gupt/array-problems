// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        unordered_map<int,int>map;
        for(int i = 0; i<n;i++)
        {
            map[arr[i]]++;
        }
        vector<int>vec;
        for(auto i:map)
        {
            if(i.second>1)
            {
                vec.push_back(i.first);
            }
        }
        if(vec.size()==0)
        {
            vec.push_back(-1);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends