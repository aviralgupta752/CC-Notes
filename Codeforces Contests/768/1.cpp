#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        for(int i=0; i<n; i++) {
            cin>>b[i];
            if(a[i]>=b[i]) {
                swap(a[i], b[i]);
            }
        }
        int mxm1=0, mxm2=0;
        for(int i=0; i<n; i++) {
            mxm1=max(mxm1, a[i]);
            mxm2=max(mxm2, b[i]);
        }
        cout<<mxm1*mxm2<<endl;
    }
}