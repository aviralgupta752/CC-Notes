#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int tmp=(__gcd(abs(x),(y))%k);
        // queue<pair<int, int>> q;
        // q.push({0, 0});
        // map<pair<int, int>, int> vis;
        // vis[{0, 0}] = 1;
        // int tmp=0;

        // int dx[]={+k,-k,0,0};
        // int dy[]={0,0,+k, -k};
        // while(!q.empty()){
        //     pair<int, int> p = q.front();
        //     q.pop();
        //     if(p.first == x && p.second == y){
        //         tmp=1;
        //         break;
        //     }
        //     for(int i=0; i<4; i++){
        //         int nx=p.first+dx[i];
        //         int ny=p.second+dy[i];
        //         if(nx>=-1000 and nx<=1000 and ny>=-1000 and ny<=1000 and vis[{nx, ny}]==0){
        //             vis[{nx, ny}] = 1;
        //             q.push({nx, ny});
        //         }
        //     }
        // }
        if(tmp==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}