#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> func(int n, int a, int b){
    vector<int> ans(n);
    vector<int> tmp;
    tmp.push_back(-1);
    ans[0]=a;
    ans[n-1]=b;

    int i=1, t=n;
    while(i<n/2){
        if(t<=a or t<=0){
            return tmp;
        }
        if(t!=b){
            ans[i++]=t;
            t-=1;
        }
        else{
            t-=1;
        }
        
    }
    t=1;
    while(i<n-1){
        if(t>=b or t>n){
            return tmp;
        }
        if(t!=a){
            ans[i++]=t;
            t+=1;
        }
        else{
            t+=1;
        }
    }
    return ans;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> ans=func(n,a,b);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}