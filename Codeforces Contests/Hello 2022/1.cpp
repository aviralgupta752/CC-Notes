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
        int val=ceil(n/2.0);
        
        if(k>val){
            cout<<-1<<endl;
        }
        else{
            vector<vector<char>> ans(n, vector<char>(n, '.'));
            int i=0, j=0;
            while(k-- and i<n and j<n){
                ans[i][j]='R';
                i+=2;
                j+=2;
                // cout<<i<<j<<ans[i][j]<<endl;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<ans[i][j];
                }
                cout<<endl;
            }
        }

    }
}