#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int solve(int a, int b) {
//     queue<pair<int, int>> q;
//     q.push({a,b});
//     map<pair<int, int>, int> lvl, vis;
//     vis[{a, b}] = 1;
//     while(!q.empty()) {
//         pair<int, int> node=q.front();
//         q.pop();
//         int x=node.first, y=node.second;
//         // cout<<x<<" "<<y<<endl;
//         if(x == y) {
//             return lvl[{x, y}];
//         }
//         if(vis.find({x+1, y}) == vis.end()) {
//             q.push({x+1, y});
//             vis[{x+1, y}]=1;
//             lvl[{x+1, y}]=lvl[{x, y}]+1;
//         }
//         if(vis.find({x, y+1}) == vis.end()) {
//             q.push({x, y+1});
//             vis[{x, y+1}]=1;
//             lvl[{x, y+1}]=lvl[{x, y}]+1;
//         }

//         if(vis.find({x|y, y}) == vis.end()) {
//             q.push({x|y, y});
//             vis[{x|y, y}]=1;
//             lvl[{x|y, y}]=lvl[{x, y}]+1;
//         }
//     }
//     return -1;
// }
int solve(int a, int b) {
    if(a==b){
        return 0;
    }
    
    return min(1+solve((a|b), b), 1+solve(a+1, b), 1+solve(a, b+1));
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }
    
}