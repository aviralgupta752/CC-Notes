#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

map<pair<int, int>, pair<int, int>> dp;

int getindex(string& s, int l, int r){
    int c=0, i=l;
    if(s[i]=='('){
        c+=1;
    }
    i+=1;
    while(c!=0){
        if(s[i]=='('){
            c++;
        }
        else if(s[i]==')'){
            c--;
        }
        i+=1;
    }
    return i;
}

pair<int, int> func(string& s, int l, int r){
    if(l>r){
        return {0, 0};
    }
    else if(l==r){
        return dp[{l, r}] = {1, 0};
    }
    else{
        int i=1, newr=0;
        newr = getindex(s, l+1, r-1);
        char sign=s[newr];
       
        pair<int, int> a=func(s, l+1, newr-1);
        pair<int, int> b=func(s, newr+1, r-1);
        
        if(sign=='+'){
            return dp[{l, r}] = {a.first+b.first, a.second+b.second};
        }
        else{
            return dp[{l, r}] = {a.first-b.second, a.second-b.first};
        }
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int q, l, r;
        cin>>q;
        
        int n=s.size();
        // dp.clear();
        func(s, 0, n-1);
        
        for(int i=0; i<q; i++){
            cin>>l>>r;
            l-=1;
            r-=1;
            
            cout<<max(dp[{l, r}].first, dp[{l, r}].second)<<" ";
        }
        cout<<"\n";
    }
}