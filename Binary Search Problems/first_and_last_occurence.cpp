//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstOccurence(int arr[], int start, int end, int n, int x){
        if(start <= end){
            int mid = start + (end-start)/2;
            
            if((mid == 0 || x>arr[mid-1]) && arr[mid] == x){
                return mid;
            }
            else if(arr[mid] < x){
                return firstOccurence(arr, mid+1, end, n,x);
            }
            else return firstOccurence(arr, start, mid-1, n, x);
        }
        return -1;
    }
    
    
    int lastOccurence(int arr[], int start, int end, int n, int x){
        if(start <= end){
            int mid = start + (end-start)/2;
            
            if((mid == n-1 || x<arr[mid+1]) && arr[mid] == x){
                return mid;
            }
            else if(arr[mid] > x){
                return lastOccurence(arr, start, mid-1, n,x);
            }
            else return lastOccurence(arr, mid+1, end, n, x);
        }
        
        return -1;
    }
    
    
    
    vector<int> find(int arr[], int n , int x )
    {
        // code 
        int first = firstOccurence(arr,0, n-1, n,x);
        int last = lastOccurence(arr,0, n-1, n, x);
        
        return {first, last};
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends