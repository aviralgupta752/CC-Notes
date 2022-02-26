#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> ans(n, vector<int>(k));
        int t=1;
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                ans[j][i]=t++;
            }
        }
        bool anss=false;
        for(auto& x: ans) {
            vector<int> v(2);
            for(auto& y: x) {
                v[y%2]+=1;
            }
            if((v[0]==0 and v[1]==x.size()) or (v[1]==0 and v[0]==x.size())){
                anss=1;
            }
        }
        if(anss==1) {
            cout<<"YES\n";
            for(auto x: ans) {
                for(auto y: x) {
                    cout<<y<<" ";
                }
                cout<<endl;
            }
        }
        else {
            cout<<"NO\n";
        }
    }
}