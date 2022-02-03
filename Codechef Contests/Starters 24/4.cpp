#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        int n=(b*x)/a;
        if(x==1 and a==1 and b==1) {
            cout<<1<<endl;
        }
        else if((b*x)%a==0 and a!=b and n+1<=x){
            cout<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}