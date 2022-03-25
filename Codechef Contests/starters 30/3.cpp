#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" ";cout<<endl;
void display(vector<vector<int>>& g) {
    for(auto& x: g) {
        for(auto& y: x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>m>>n;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1-=1;
        y1-=1;
        x2-=1;
        y2-=1;

        vector<vector<int>> g(m,vector<int>(n));
        g[x1][y1]=1;
        
        queue<pair<int, int>> q;
        vector<vector<int>> vis(m, vector<int>(n));
        int l=0;

        q.push({x1,y1});
        vis[x1][y1]=1;
        
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        
        
        while(!q.empty()) {
            int sz=q.size();
            for(int j=0; j<sz; j++) {
                pair<int, int> node=q.front();
                q.pop();
                int x=node.first;
                int y=node.second;
                if(l%2==0) {
                    g[x][y]=1;
                }
                else {
                    g[x][y]=2;
                }

                for(int i=0; i<4; i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx>=0 and ny>=0 and nx<m and ny<n and vis[nx][ny]==0){
                        vis[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            ++l;
        }
        // debug2(g);
        if(g[x2][y2]==2) {
            display(g);
            continue;
        }
        for(int i=0; i<4; i++){
            int nx=x2+dx[i];
            int ny=y2+dy[i];
            if(nx>=0 and ny>=0 and nx<m and ny<n){
                g[nx][ny]=3;
            }
        }
        g[x2][y2]=2;
        display(g);
    }
}