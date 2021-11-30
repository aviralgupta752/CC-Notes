#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// bool func(int a, int b, int x){
//     if(a>=b){
//         swap(a, b);
//     }
    
//     if(a==x or b==x){
//         return 1;
//     }
//     if(abs(a-b)<x){
//         return 0;
//     }
//     cout<<a<<" "<<b<<"\n";
//     return func(a, abs(b-a), x);
// }
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        // if(func(a, b, x)==1){
        //     cout<<"YES\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }

        queue<pair<int, int>> q;
        q.push({a, b});
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            if(p.first==x or p.second==x){
                cout<<"YES\n";
                break;
            }
            if(p.first-abs(p.first-p.second)>=x){
                q.push({p.first, abs(p.second-p.first)});
            }
            if(p.second-abs(p.first-p.second)>=x){
                q.push({abs(p.second-p.first), p.second});
            }
        }
    }
}