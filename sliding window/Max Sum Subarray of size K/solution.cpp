// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here
        long sum = 0;
        long maximum = INT_MIN;
        int i =0 ,j=0;
        while(j<N)
        {
            sum+=Arr[j];
            if(j-i+1<k)j++;  // j-i+1 is the window size
            else if(j-i+1==k){
                maximum = max(maximum,sum);
                sum-=Arr[i];
                i++;j++;
            }
        }
        return maximum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends