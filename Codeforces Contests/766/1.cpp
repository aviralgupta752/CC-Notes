#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int solve(vector<vector<char>> ma, int r, int c){
    int n=ma.size();
    int m=ma[0].size();
    int co=0;
    if(ma[r][c]=='B'){
        return 0;
    }
    for(int i=0; i<m; i++){
        if(ma[r][i]=='B'){
            co++;
        }
    }
    if(co){
        return 1;
    }
    co=0;
    for(int i=0; i<n; i++){
        if(ma[i][c]=='B'){
            co++;
        }
    }
    if(co){
        return 1;
    }
    return 2;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        
        vector<vector<char>> ma(n, vector<char>(m));
        int cb=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ma[i][j];
                if(ma[i][j]=='B'){
                    cb+=1;
                }
            }
        }
        if(cb==0){
            cout<<-1<<endl;
        }
        else{
            cout<<solve(ma, r-1, c-1)<<endl;
        }
    }
}