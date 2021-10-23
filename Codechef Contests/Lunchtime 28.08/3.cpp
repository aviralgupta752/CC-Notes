#include<bits/stdc++.h>
using namespace std;
#define int long long
int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> dp(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int mx = n-1;
        dp[n-1] = mx;
        for(int i=n-2 ; i>=0 ; i--){
            if(v[i] > v[mx]){
                mx = i;
            }
            dp[i] = mx;
        }
    
        int ans = 0;
        int i=0;
        while(i<n-1){
            if(v[dp[i]]>v[i]){
                break;
            }
            i=dp[i+1];
            ans++;
        }
        if(i>=n-1){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}