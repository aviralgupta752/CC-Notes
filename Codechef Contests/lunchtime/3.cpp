#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int first(string& s, char c) {
    int n=s.size();
    for(int i=0; i<n; i++) {
        if(s[i]==c) {
            return i;
        }
    }
    return -1;
}
int last(string& s, char c) {
    int n=s.size();
    for(int i=n-1; i>=0; i--) {
        if(s[i]==c) {
            return i;
        }
    }
    return -1;
}
int solve(vector<int>& nums, string& s) {
    int n=nums.size();
    vector<int> tmp=nums;
    sort(tmp.begin(), tmp.end());
    if(tmp==nums) {
        return 0;
    }
    int cn=0, cs=0;
    for(int i=0; i<n; i++) {
        (s[i]=='S')?cs+=1:cn+=1;
    }
    if(cn==n or cs==n) {
        return -1;
    }
    int i=0, j=n-1;
    while(nums[i]==tmp[i]) {
        i+=1;
    }
    while(nums[j]==tmp[j]) {
        j-=1;
    }

    int nl=0, nr=0, sl=0, sr=0;
    for(int k=i; k>=0; k--) {
        if(s[k]=='N') {
            nl=1;
            break;
        }
    }
    for(int k=i; k>=0; k--) {
        if(s[k]=='S') {
            sl=1;
            break;
        }
    }
    for(int k=j; k<n; k++) {
        if(s[k]=='N') {
            nr=1;
            break;
        }
    }
    for(int k=j; k<n; k++) {
        if(s[k]=='S') {
            sr=1;
            break;
        }
    }
    if((nl and sr) or (sl and nr)) {
        return 1;
    }
    return 2;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        string s;
        cin>>s;
        cout<<solve(nums, s)<<endl;
    }
}