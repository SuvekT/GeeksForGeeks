//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int ans=0;
	    if(pat.size()>txt.size()) return 0;
	    map<char,int> mp_pt;
	    map<char,int> mp_txt;
	    for(auto it:pat) mp_pt[it]++;
	    // first window
	    for(int i=0;i<pat.size();i++){
	        mp_txt[txt[i]]++;
	    }
	    if(mp_pt == mp_txt) ans++;
	    // further windows
	    for(int i=pat.size();i<txt.size();i++){
	        char coming=txt[i];
	        char going=txt[i-pat.size()];
	        if(mp_txt[going]==1) mp_txt.erase(going);
	        else{
	            mp_txt[going]--;
	        }
	        mp_txt[coming]++;
	        if(mp_txt == mp_pt) ans++;
	    }
	    return ans;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
