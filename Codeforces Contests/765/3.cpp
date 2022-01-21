#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int n, l, k;
    cin>>n>>l>>k;
    vector<int> d(n), a(n), v;
    for(int i=0;i<n;i++){
        cin>>d[i];
        if(i){
            v.push_back(d[i]-d[i-1]);
        }
    }
    v.push_back(l-d[n-1]);

    priority_queue<pair<int, int>> pq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i)
            pq.push({a[i], v[i]});
    }

    map<pair<int, int>, int> mp;
    for(int i=0; i<k; i++){
        pair<int, int> p=pq.top();
        mp[p]+=1;
        pq.pop();
    }

    vector<int> newv, newa;
    for(int i=0; i<n; i++){
        if(mp.find({a[i], v[i]})==mp.end()){
            newv.push_back(d[i]);
            newa.push_back(a[i]);
        }
    }

    n=newv.size();
    int ans=0;
    for(int i=0; i<n-1; i++){
        ans+=newa[i]*(newv[i+1]-newv[i]);
    }
    ans+=newa[n-1]*(l-newv[n-1]);
    cout<<ans<<endl;
}