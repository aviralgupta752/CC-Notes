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
        
        set<int> s={6,13,20,27,7,14,21,28};
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}