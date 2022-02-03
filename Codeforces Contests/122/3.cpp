#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string solve() {
    int hc, dc, hm, dm, a, w, k;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(int i=0; i<=k; i++) {
        if(ceil(1.0*(hc+a*i)/dm) >= ceil(1.0*hm/(w*(k-i)+dc))) {
            return "YES";
        }
    }
    return "NO";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}