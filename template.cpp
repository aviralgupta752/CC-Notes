#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);


int maximumPoints(vector<vector<int>>& arr, int n, int x, int y) {
    int size = 1001;
    int temp[size][size];
    memset(temp, 0, sizeof(temp));
    
    for(int i=0; i<n; i++) {
        temp[arr[i][0]][arr[i][1]] = 1;
    }
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(i-1>=0) temp[i][j] += temp[i-1][j];
            if(j-1>=0) temp[i][j] += temp[i][j-1];
            if(i-1>=0 && j-1>=0) temp[i][j] -= temp[i-1][j-1];
        }
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans = 0;
    for(int i=0; i+x-1<size; i++) {
        for(int j=0; j+y-1<size; j++) {
            
            int val = temp[i+x-1][j+y-1];
            
            if(i-1>=0) val-=temp[i-1][j];
            if(j-1>=0) val-=temp[i][j-1];
            if(i-1>=0 && j-1>=0) val+=temp[i-1][j-1];
            
            if(val > ans) {
                ans = val;
            }
        }
    }
    return ans;
}

int32_t main(){
    // vector<vector<int>> arr = {{8,8}, {4,3}, {2,8}, {2,9}, {9,9}, {4,1}, {1,1}, {1,5}, {7,4}, {2,5}};
    vector<vector<int>> arr = {{1,1}, {2,3}, {3,4}, {2,4}, {5,5}};
    cout<<maximumPoints(arr, arr.size(), 2, 2)<<endl;
}