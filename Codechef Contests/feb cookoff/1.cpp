#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> ans(n+2);
        for(int i=0; i<n; i++) {
            ans[i]=i+1;
        }
        if(k==n) {
            for(int i=0; i<n; i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else {
            int val=ans[k];
            for(int i=k; i<n-1; i++) {
                ans[i]=ans[i+1];
            }
            ans[n-1]=val;

            int c=0;
            for(int i=0; i<n; i++) {
                if(ans[i]%(i+1)==0) {
                    c+=1;
                }
            }
            if(c==k){
                for(int i=0; i<n; i++) {
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
            else {
                ans[0]=2, ans[1]=1;
                c=0;
                for(int i=0; i<n; i++) {
                    if(ans[i]%(i+1)==0) {
                        c+=1;
                    }
                }
                if(c==k){
                    for(int i=0; i<n; i++) {
                        cout<<ans[i]<<" ";
                    }
                    cout<<endl;
                }
                else {
                    cout<<-1<<endl;
                }
            }
        }
    }
}