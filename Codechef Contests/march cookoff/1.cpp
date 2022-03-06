#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        cout<<(x-1)*v[0]+v[1]<<endl;
    }
}