#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if((x+y)%2==1){
            cout<<"-1 -1\n";
        }
        else{
            int a=x/2;
            int b=(x+y)/2-a;
            cout<<a<<" "<<b<<"\n";
        }
    }
}