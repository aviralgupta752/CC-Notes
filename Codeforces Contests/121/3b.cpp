#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int func(int st, int ed) {
    return ed * (ed + 1) / 2 - (st - 1) * st / 2;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        vector<int> k(n), h(n);

        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        vector<vector<int>> it, it1;

        
        for(int i=0; i<n; i++){
            int st = k[i] - h[i] + 1, end = k[i];
            it.push_back({st, end});
        }
        sort(it.begin(), it.end());

        int st = it[0][0], end = it[0][1];
        for (auto& x : it) {
            if (x[0] > end) {
                it1.push_back({st, end});
                st = x[0], end = x[1];
            } 
            else {
                end = max(end, x[1]);
            }
        }
        it1.push_back({st, end});

        for (auto& x : it1) {
            ans += func(1, x[1] - x[0] + 1);
        }

        cout<<ans<<endl;
    }
}