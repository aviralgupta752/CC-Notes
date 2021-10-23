#include<bits/stdc++.h>
using namespace std;
#define mod             1000000007
#define inf             1e18
#define pii             std::pair<ll,ll>
#define pq_max              std::priority_queue<ll>
#define pq_min              std::priority_queue<ll,vi,std::greater<ll> >
#define mid(l,r)            (l+(r-l)/2)
#define iter(container, it) for(__typeof(container.begin()) it  =  container.begin(); it ! =  container.end(); it++)
void err(std::istream_iterator<std::string> it) {}
 template<typename T, typename... Args>
void err(std::istream_iterator<std::string> it, T a, Args... args) {
      std::cout << *it << a << std::endl;
      err(++it, args...);
}
void file_i_o()
{
      std::ios_base::sync_with_stdio(0); 
      std::cin.tie(0);
      std::cout.tie(0);
}
using ll = long long;
using ld = long double;
using ull = unsigned long long;
#define print pair<int,int>
#define prll pair<ll,ll>
#define prld pair<ld,ld>

#define pb push_back
#define eb emplace_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front

#define lb lower_bound
#define ub upper_bound

#define INF 2147483647
#define NEGINF -2147483648
vector<int> z_function(string s){
    int n = s.size(), i, l = 0, r = 0;
    vector<int> z(n);
    z[0] = 0;
    for(i = 1 ; i<n ; i++){
        if(i <= r)
            z[i] = min(r-i+1, z[i-l]);
        while((i+z[i]<n) && s[z[i]] == s[i+z[i]])
            z[i]++;
        if((i+z[i]-1)>r)
        {
            l = i;
            r = i+z[i]-1;
        }
    }
    return z;
}
vector<int> segarr;
int n;
int query(int l, int r){
    l += n; r += n;
    int res = 0;
    while(l <= r){
        if(l%2 != 0) {
            res = max(res,segarr[l]);
            l++;
        }
        if(r%2 == 0)
        {
            res = max(res,segarr[r]);
            r--;
        }
        l /= 2;
        r /= 2;
    }
    return res;
}
void build(vector<int>&a){
    for(int i = n, j = 0 ; i<2*n ; i++ , j++)
       segarr[i] = a[j]+j;
    for(int i = n-1 ; i >= 1 ; i--)
       segarr[i] = max(segarr[i*2],segarr[i*2+1]);   
}

void solve_tst_cs() {
    string s1,s2,x;
    cin>>s1>>s2>>x;
    // s1 = " "+s1;
    // s2 = " "+s2;
    int n1 = s1.size(), n2 = s2.size();
    vector<int> z1 = z_function(s1+'$'+x);
    vector<int> z2 = z_function(s2+'$'+x);
    vector<int> z;
    int z1sz = z1.size(), z2sz = z2.size(),i;
    for(i = n2 ; i<z2sz ; i++)
      z.pb(z2[i]);
    
    n = z.size();
    segarr.clear();
    segarr.resize(2*n);
    build(z);

    ll res = 0;
    for(i = n1 ; i<z1sz ; i++) {
        int ind = query(i-n1, min(i-n1+z1[i],n-1));
        res = res+max(ind-i+n1,z1[i]);
    }
    cout<<res<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      solve_tst_cs();
    }
}