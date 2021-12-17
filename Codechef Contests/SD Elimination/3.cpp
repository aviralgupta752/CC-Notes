#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string func(int n){
    if(n==2){
        return "ab";
    }
    else{
        string ans="a";
        for(int i=1; i<n-1; i++){
            ans+="b";
        }
        ans+="a";
        return ans;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<func(n)<<endl;
    }
}