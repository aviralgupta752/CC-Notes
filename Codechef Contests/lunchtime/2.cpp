#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        int d;
        cin>>d;
        if(d%2==1) {
            cout<<-1<<endl;
        }
        else {
            cout<<0<<" "<<d/2<<endl;
            cout<<d/2<<" "<<0<<endl;
            cout<<-d/2<<" "<<0<<endl;
            cout<<0<<" "<<-d/2<<endl;
        }
    }
}