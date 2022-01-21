#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int count(int k){
    int ans=0;
    while(k){
        ans+=(k%2);
        k/=2;
    }
    return ans;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=1, i=0;
        while(i<n){
            if(count(k)%2==0){
                cout<<k<<" ";
                i++;
            }
            k+=1;
        }
        cout<<endl;
    }
}