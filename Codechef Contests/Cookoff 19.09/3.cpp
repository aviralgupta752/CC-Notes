#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s, t;
		cin>>s>>t;
		if(s==t){
			cout<<"YES"<<endl;
		}
		else{
			int x=0, y=0;
			for(auto& ch: t){
				if(ch=='0'){
					x+=1;
				}
				else{
					y+=1;
				}
			}
			if(x==0 or y==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
}