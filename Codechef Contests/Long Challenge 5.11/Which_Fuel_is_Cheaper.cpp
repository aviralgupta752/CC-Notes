#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        int val=x+a*k-y-b*k;
        if(val<0)cout<<"PETROL"<<endl;
        else if(val>0)cout<<"DIESEL"<<endl;
        else cout<<"SAME PRICE"<<endl;
    }
}