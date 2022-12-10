#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);

int32_t main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        for(int i=0;i<n;i++) {
            queue<int> q;
            q.push(a[i]);
            map<int, int> lvl;
            while(!q.empty()) {
                int node=q.front();
                q.pop();
                if(node%32768==0) {
                    cout<<lvl[node]<<" ";
                    break;
                }
                q.push(node+1);
                lvl[node+1]=lvl[node]+1;
                q.push(node*2);
                lvl[2*node]=lvl[node]+1;
            }
        }
    }
}