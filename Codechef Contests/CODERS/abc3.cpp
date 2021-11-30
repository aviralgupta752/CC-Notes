#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n, p, q;
		cin>>n>>p>>q;
		string s;
		cin>>s;
		int cx=0, cy=0, c=0;
		p=abs(p);
		q=abs(q);
		vector<int> v;
		for(int i=0; i<n; i++){
			if(s[i]=='0'){
				v.push_back(c);
				c=1;
			}
			else{
				c+=1;
			}
		}
		for(int i=0; i<v.size(); i++){
			if(i%2==0){
				cx+=v[i];
			}
			else{
				cy+=v[i];
			}
		}
		cout<<p<<" "<<q<<" "<<cx<<" "<<cy<<endl;
		bool ans=false;
		if(p>=cx and q>=cy){
			if(p%2==cx%2 and q%2==cy%2){
				ans=true;
			}
		}
		if(p>=cy and q>=cx){
			if(p%2==cy%2 and q%2==cx%2){
				ans=true;
			}
		}

		cout<<((ans==true)?"YES\n":"NO\n");
	}
}