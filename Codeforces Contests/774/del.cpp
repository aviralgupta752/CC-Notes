#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int solve(int n) {
    int c=0;
    while(n) {
        if(n%2) c++;
        n/=2;
    }
    return c;
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact=2, tmp=0;
        for(int i=3; i<=17; i++) {
            if(fact*i>n) {
                break;
            }
            tmp=fact;
            fact*=i;
        }
        cout<<min(1+solve(n-fact), solve(n))<<endl;
    }
}