#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string calc(string node, int i, int j){
    int c0=0, c1=0;
    string tmp=node;
    for(; i<=j; i++){
        if(node[i]=='0'){
            c0+=1;
        }
        else{
            c1+=1;
        }
        tmp[i]='0'+(1-(tmp[i]-'0'));
    }
    if(c0==0 or c1==0){
        return "";
    }
    return tmp;
}
vector<pair<int, int>> ans;
int solve(string& a, string& b) {
    queue<string> q;
    q.push(a);
    int n=a.size();
    unordered_map<string, int> vis, lvl;
    map<string, vector<pair<int, int>>> mp;
    vis[a]=1;

    while(!q.empty()) {
        string node=q.front();
        q.pop();
        if(node==b) {
            ans=mp[node];
            return lvl[node];
        }

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                string tmp=calc(node, i, j);
                // cout<<tmp<<" ";
                if(tmp!="" and vis[tmp]==0){
                    mp[tmp]=mp[node];
                    mp[tmp].push_back({i+1, j+1});
                    vis[tmp]=1;
                    q.push(tmp);
                    lvl[tmp]=lvl[node]+1;
                }
            }
        }
    }
    return -1;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        ans.clear();
        cout<<solve(a, b)<<endl;
        for(auto& x: ans){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}