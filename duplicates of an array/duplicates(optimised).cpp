// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        // code here
        vector<int>vec;
        sort(arr,arr+n);
        // creating a sorted array
        int i = 0;
        // aim to select the first element of an array
        for(int j = 1; j<n; j++)
        {
            // now comparing with rest of the elements
            if(arr[i]==arr[j] && i == j-1)
            {
                vec.push_back(arr[i]);
            }
            else if(arr[i]!= arr[j])
            {
                i = j;
            }
            // if {1,2,2,3,3}
        }
        if(vec.size() == 0)
        {
            vec.push_back(-1);
        }
        return(vec);
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