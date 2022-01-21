#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool solve(int a, int b, int c){
    int d, tmp;
    d=c-b;
    tmp=b-d;
    if(tmp%a==0 and tmp>0) 
        return true;

    d=(b-a);
    tmp=b+d;
    if(tmp%c==0 and tmp>0){
        return true;
    }

    d=(c-a);
    if(d%2==0){
        d/=2;
        tmp=a+d;
        if(tmp%b==0 and tmp>0){
            return true;
        }
    }
    return false;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        bool ans=solve(a,b,c);
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}