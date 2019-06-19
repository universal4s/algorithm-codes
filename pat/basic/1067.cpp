#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    string s;
    int n;
    cin>>s>>n;
    string t;
    int cnt=0;
    getchar();
    while(1){
        getline(cin,t);
        if(t.length()==1&&t[0]=='#') break;

        if(t==s&&cnt<n){
            cout<<"Welcome in\n";
            return ;
        }
        else {
            cout<<"Wrong password: "<<t<<"\n";
        }
        cnt++;
        if(cnt==n){
            cout<<"Account locked\n";
            return;
        }
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}