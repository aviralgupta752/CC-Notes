#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>x;
            m[x%3]+=1;
        }
        int ans=0;
        int mim=min(m[1], m[2]);
        ans+=mim;
        m[1]-=mim;
        m[2]-=mim;
        
        if(m[1]%3==0 and m[2]%3==0){
            ans+=m[1]/3+m[2]/3;
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}