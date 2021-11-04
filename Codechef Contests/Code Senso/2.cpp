#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> v;
		for(int i=0; i<n; i++){
			if(s[i]=='0'){
				v.push_back(0);
				while(i<n-1 and s[i]==s[i+1]){
					i+=1;
				}
			}
			else if(s[i]=='1'){
				v.push_back(1);
				while(i<n-1 and s[i]==s[i+1]){
					i+=1;
				}
			}
		}
		int count = s.size();
		if(count==1){
			cout<<"SAHID\n";
		}
		else if(count==2){
			cout<<"RAMADHIR\n";
		}
		else{
			int x=0, y=1;
			for(int i=3; i<=count; i++){
				if(x==1 or y==1){
					x=y;
					y=0;
				}
				else{
					x=y;
					y=1;
				}
			}
			if(count==1){
				cout<<"SAHID\n";
			}
			else if(count==2){
				cout<<"RAMADHIR\n";
			}
		}
	}
}