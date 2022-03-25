#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

string solve(int x, int d) {
    if(x%(d*d)) {
        return "NO";
    }
    int val=x/(d*d);
    map<int, int> v;
    for(int i=2; i*i<=d; i++) {
        if(d%i==0) {
            v[i]=1;
            v[d/i]=1;
        }
    }
    // cout<<v.size()<<" "<<d<<endl;
    int c=0, tmp=0;
    for(int i=1; i*i<=val; i++) {
        int a=i, b=val/i;
        if(a%d!=0 and b%d!=0) {
            c++;
        }
        else if(a%d==0) {
            if(v.find(b)!=v.end()) {
                if(v.size()-1>=2) {
                    c++;
                }
            }
            else{
                if(v.size()>=2) {
                    c++;
                }
            }
        }
        else if(b%d==0) {
            if(v.find(a)!=v.end()) {
                if(v.size()-1>=2) {
                    c++;
                }
            }
            else{
                if(v.size()>=2) {
                    c++;
                }
            }
        }
        else {
            if(v.find(a)!=v.end() and v.find(b)!=v.end()) {
                if(v.size()-2>=2) {
                    c++;
                }
            }
            else if(v.find(a)!=v.end() or v.find(b)!=v.end()) {
                if(v.size()-1>=2) {
                    c++;
                }
            }
            else {
                if(v.size()>=2) {
                    c++;
                }
            }
        }
        if(c==2) {
            return "YES";
        }
    }
    return "NO";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x, d;
        cin>>x>>d;
        cout<<solve(x, d)<<endl;
    }
}