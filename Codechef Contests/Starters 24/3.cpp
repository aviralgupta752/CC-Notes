#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool cmp(pair<char, int>& a, pair<char, int>& b) {
    return a.second>b.second;
}
pair<bool, string> solve(string& s) {
    int n=s.size();
    if(n%2==1) {
        return {0, ""};
    }
    unordered_map<int, int> mp;
    for(auto& x: s) {
        mp[x]+=1;
        if(mp[x]>n/2){
            return {0, ""};
        }
    }
    vector<pair<char, int>> v;
    for(auto& x: mp) {
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);

    string ans=s;
    int i=0, j=n/2, tmp=0;
    while(tmp<v.size()) {
        int sz=v[tmp].second;
        char c=v[tmp].first;

        if(tmp%2==0){
            int k=0; 
            for(; k<sz and i<n/2; k++) {
                ans[i++]=c;
            }
            for(; k<sz and j<n; k++) {
                ans[j++]=c;
            }
        }
        else {
            int k=0; 
            for(; k<sz and j<n; k++) {
                ans[j++]=c;
            }
            for(; k<sz and i<n/2; k++) {
                ans[i++]=c;
            }
        }
        tmp+=1;
    }
    return {1, ans};
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
    
        pair<bool, string> ans=solve(s);
        if(ans.first==1) {
            cout<<"YES"<<endl;
            cout<<ans.second<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}