#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int m, x;
        cin>>m>>x;
        m%=(x+1);
        vector<int> ans(x, 1);
        for(int i=2; i<=x; i++){
            if(m==1){
                ans[i-1]=i;
            }
            else if(m<=i){
                if(m==2){
                    ans[i-1]=1;
                }
                else if(m%2==0){
                    ans[i-1]=2;
                }
                else{
                    ans[i-1]=m-1;
                }
            }
            else{
                ans[i-1]=i-1;
            }
        }
        for(int i=0; i<x; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}