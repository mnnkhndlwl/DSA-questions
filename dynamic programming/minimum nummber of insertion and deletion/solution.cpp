/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int n = str1.length();
	    int m = str2.length();
	    int dp[n+1][m+1];
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=m;j++)
	        {
	            if(i==0 or j==0)
	            {
	                dp[i][j] = 0;
	            }
	        }
	    }
	    
	    for(int i = 1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            if(str1[i-1] == str2[j-1])
	            dp[i][j] = 1 + dp[i-1][j-1];
	            else
	            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    
	    int insertion = n - dp[n][m];
	    int deletion = m - dp[n][m];
	    
	    return insertion + deletion;
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends