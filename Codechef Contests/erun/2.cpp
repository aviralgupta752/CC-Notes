#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, a;
        cin>>n>>a;
        
        if(a%2==0){
            if(n<=1){
                cout<<"Even\n";
            }
            else{
                cout<<"Impossible\n";
            }
        }
        else{
            if(n%2==0){
                cout<<"Even\n";
            }
            else{
                cout<<"Odd\n";
            }
        }
    }
}