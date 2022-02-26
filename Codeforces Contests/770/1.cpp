#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int solve(string& s, int n, int k) {
    string tmp=s;
    reverse(tmp.begin(), tmp.end());
    if(k==0 or tmp==s) {
        return 1;
    }
    else{
        return 2;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        cout<<solve(s, n, k)<<endl;
    }
}