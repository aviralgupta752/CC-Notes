#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>=2){
			cout<<1+(n-2)*2;
		}
		else{
			cout<<1<<endl;
		}
	}
	return 0;
}