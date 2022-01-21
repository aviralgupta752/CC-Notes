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
        
        vector<int> h(n), k(n);
        for(int i=0; i<n; i++){
            cin>>k[i];
        }
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        int ans=0;
        int last=0;
        for(int i=0; i<n; i++){
            if(i)
                last=max(0LL, (k[i-1]+h[i-1]-1)-k[i]);
            
            if(last>=h[i]){
                ans=last*(last+1)/2;
            }
            else{
                ans+=h[i]*(h[i]+1)/2 - last*(last+1)/2;
            }
        }
        cout<<ans<<endl;
    }
}