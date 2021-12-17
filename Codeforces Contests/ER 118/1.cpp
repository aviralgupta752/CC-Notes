#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        int c1=0, c2=0;
        float m=x1, n=x2;
        while(x1){
            c1++;
            x1/=10;
            m/=10;
        }
        while(x2){
            c2++;
            x2/=10;
            n/=10;
        }
        if(c1+p1>c2+p2){
            cout<<">\n";
        }
        else if(c1+p1<c2+p2){
            cout<<"<\n";
        }
        else{
            if(m>n){
                cout<<">\n";
            }
            else if(m<n){
                cout<<"<\n";
            }
            else{
                cout<<"=\n";
            }
        }
    }
}