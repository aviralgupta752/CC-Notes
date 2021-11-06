#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        int lo=0, hi=n, ans=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(m-mid<=((n-mid)*(n-mid-1))/2){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        // cout<<ans<<endl;
        int c=0, i=0;
        while(c<m-ans){
            for(int j=i+1; j<n-ans and c<m-ans; j++){
                cout<<i+1<<" "<<j+1<<endl;
                c+=1;
            }
            i+=1;
        }
        for(int i=0; i<ans and c<m; i++){
            cout<<1<<" "<<n-i<<endl;
            c+=1;
        }
    }
}