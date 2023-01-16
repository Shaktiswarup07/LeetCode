//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        vector<long long>v;
        stack<long long> st;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                v.push_back(-1);
            }
            else if(st.top()>arr[i]){
                v.push_back(st.top());
            }
            else if(st.top()<=arr[i]){
                while(st.size()>0 && st.top()<=arr[i]){
                    st.pop();
                }
                if(st.size()!=0)
                v.push_back(st.top());
                else
                v.push_back(-1);
                
            }
            st.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends