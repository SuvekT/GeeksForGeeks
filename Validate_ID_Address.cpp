//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            if(s[0]=='.' || s[s.size()-1]=='.') return 0;
        vector<string> v;
        string temp="";
        for(auto it:s){
            
            if(it!='.'){
                if(!isdigit(it)) return 0;
                temp+=it;
            }
            else{
                v.push_back(temp);
                temp="";
            }
        }
         v.push_back(temp);
               // temp="";
               if(v.size()!= 4) return 0;
               for(auto it:v){
                   if(it.length()==0 || (it.length()>1 && it[0]=='0') || 
                   it.length()>3 || stoi(it)>255) return 0;
               }
               return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
