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
        string a, b;
        cin>>a>>b;
        unordered_map<int, int> mpa, mpb;
        int c=0;
        for(int i=0; i<n; i++) {
            mpa[a[i]-'0']++;
            mpb[b[i]-'0']++;
            if(a[i]!=b[i]) {
                c+=1;
            }
        }
        // cout<<c<<" ";
        if(abs(mpa[1]-mpb[1])%2==1) {
            cout<<-1<<endl;
            continue;
        }
        else {
            if(c%2==0) {
                
            }
        }
    }
}