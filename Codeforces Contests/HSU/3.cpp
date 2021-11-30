#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int k, x;
        cin>>k>>x;
        int val=(k*(k+1))/2;
        int ans=0;
        if(x<=val){
            int lo=0, hi=k, tmp=0;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(mid*(mid+1)/2>=x){
                    tmp=mid;
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            ans+=tmp;
        }
        else{
            ans+=k;
            x-=val;
            int lo=0, hi=k-1, tmp=k-1;
            // cout<<"hi "<<hi<<" "<<lo<<endl;
            val-=k;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                // cout<<val-mid*(mid+1)/2-x<<endl;
                if(mid*k-mid*(mid+1)/2>=x){
                    tmp=mid;
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            // cout<<tmp<<endl;
            ans+=tmp;
        }
        cout<<ans<<endl;
    }
}