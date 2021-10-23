#include<bits/stdc++.h>
using namespace std;
#define int long long int
typedef pair<int, int> pit;

void computeLPSArray(string pat, int M, int* lps)
{
	int len = 0;
	lps[0] = 0; // lps[0] is always 0
	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) {
				len = lps[len - 1];
				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

bool kmp(string pat, string txt){
	int m = pat.size();
	int n = txt.size();
	int lps[m];
	computeLPSArray(pat, m, lps);
	int i = 0, j = 0; // index for pat[]

	while (i < n) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}
		if (j == m) {
			return 1;
			j = lps[j - 1];
		}
		// mismatch after j matches
		else if (i < n && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return 0;
}
// Fills lps[] for given patttern pat[0..M-1]


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string a, b, x;
		cin>>a>>b>>x;
		int ans=0;
		vector<string> v1, v2;
		string tmp="";
		v1.push_back(tmp);
		v2.push_back(tmp);
		for(int i=0; i<a.size(); i++){
			tmp+=a[i];
			if(kmp(tmp, x)){
				v1.push_back(tmp);
			}
		}

		tmp="";
		for(int i=0; i<a.size(); i++){
			tmp+=a[i];
			if(kmp(tmp, x)){
				v2.push_back(tmp);
			}
		}

		for(int i=0; i<v1.size(); i++){
			for(int j=0; j<v2.size(); j++){
				if(kmp(v1[i]+v2[j], x)){
					cout<<v1[i]+v2[j];
					ans+=1;
				}
			}
		}
		cout<<ans<<endl;
	}
}