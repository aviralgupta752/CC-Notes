#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        string a, b;
        cin>>a>>b;
        vector<int> tmp(n), v(n);
        for(int i=0; i<n; i++) {
            tmp[i]=(b[i]-a[i]+26)%26;
        }
        v[0]=tmp[0];
        for(int i=1; i<n; i++) {
            if(i%2==0) {
                v[i]+=v[i-1]+tmp[i];
            }
            else {
                v[i]+=v[i-1]-tmp[i];
            }
        }
        // for(auto& x: v) {
        //     // x%=26;
        //     cout<<x<<" ";
        // }
        cout<<endl;
        for(int i=0; i<q; i++) {
            int l, r;
            cin>>l>>r;
            l-=1, r-=1;
            int sum=v[r];
            // cout<<sum<<" ";
            if(l-1>=0) {
                sum-=v[l-1];
            }
            // cout<<sum<<" ";
            if((sum+26)%26==0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
}