//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
    	stack<char> st;
    	for(auto it:S){
    	    if(it!='-') st.push(it);
    	}
    	string ans="";
    	int n=0;
    	while(!st.empty()){
    	    char temp=st.top();
    	    st.pop();
    	    ans.push_back(toupper(temp));
    	    n++;
    	    if(n==K && !st.empty()){
    	        ans.push_back('-');
    	        n=0;
    	    }
    	}
    	reverse(ans.begin(),ans.end());
    	return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends
