// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        // code here
        vector<int> vec;
        vector<int> dupl;
        int cnt = 0;
        for(int i = 0; i<n;i++)
        {
            vec.push_back(arr[i]);
        }
        for(int i = 0; i<n;i++)
        {
            int res = count(vec.begin(),vec.end(),vec[i]);
            if(res>1)
            {
                
                if(count(dupl.begin(),dupl.end(),vec[i]) != 1)
                    dupl.push_back(vec[i]);
            }
            else
            {
                cnt++;
            }
        }
        if(cnt == n)
        {
            dupl.push_back(-1);
        }
        sort(dupl.begin(),dupl.end());
        return dupl;
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