#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            if(n==2){
                cout<<"NO\n";
                continue;
            }
            else {
                cout<<"YES\n";
                vector<int> nums(n);
                // vector<int> nums={7,5,3,1,4,2,6,8};
                
                int i=0, val=n-1;
                while(i<n/2){
                    nums[i]=val;
                    val-=2;
                    i+=1;
                }
                nums[i++]=4;
                nums[i++]=2;

                val=6;
                for(int i=n/2+2; i<n; i++){
                    nums[i]=val;
                    val+=2;
                }

                for(int i=0; i<n; i++){
                    cout<<nums[i]<<" ";
                }
                cout<<"\n";

                // cout<<lis(nums, n)<<" ";
                // reverse(nums.begin(), nums.end());
                // cout<<lis(nums, n)<<endl;
            }
        }
        else{
            cout<<"YES\n";
            vector<int> nums(n);
            
            int i=0, val=1;
            while(i<=n/2){
                nums[i]=val;
                val+=2;
                i+=1;
            }
            val-=3;
            for(int i=n/2+1; i<n; i++){
                nums[i]=val;
                val-=2;
            }

            for(int i=0; i<n; i++){
                cout<<nums[i]<<" ";
            }
            cout<<"\n";
            // cout<<lis(nums, n)<<" ";
            // reverse(nums.begin(), nums.end());
            // cout<<lis(nums, n)<<endl;
        }
    }
}