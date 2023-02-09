//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      unordered_map<int,int>mprow;
      unordered_map<int,int>mpcol;
      long long int p=n*n;
      vector<long long int> v;
      int row=0,col=0;
      for(int i=0 ; i< k ; i++){
          
         
          if(mprow[arr[i][0]-1]==0){
              mprow[arr[i][0]-1]=1;
              p-=(n-col);
              row++;
          }
          if(mpcol[arr[i][1]-1]==0){ 
               mpcol[arr[i][1]-1]=1;
              p-=(n-row);
              col++;
          }
          v.push_back(p);
      }
      return v;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends