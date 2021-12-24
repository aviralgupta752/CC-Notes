#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return 1;
    return 0;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s, p;
        cin>>s>>p;
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            char k = 'a' + i;
            string tmp1 = s;
            string tmp2 = p;
            int tmp = 0;
            for (int i = 0; i < n; i++)
            {
                if (tmp1[i] == '?')
                    tmp1[i] = k;
                if (tmp2[i] == '?')
                    tmp2[i] = k;
            }
            for (int i = 0; i < n; i++)
            {
                if (tmp1[i] == tmp2[i])
                {
                    continue;
                }
                else if (isVowel(tmp1[i]) and isVowel(tmp2[i]))
                {
                    tmp += 2;
                }
                else if (!isVowel(tmp1[i]) and !isVowel(tmp2[i]))
                {
                    tmp += 2;
                }
                else
                {
                    tmp++;
                }
            }
            ans = min(ans, tmp);
        }
        cout << ans << endl;
    }
}