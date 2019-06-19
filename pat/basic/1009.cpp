#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
string s[85];
void solve(){
    string x;
    int i=0;
    while(cin>>x){
        s[i++]=x;
    }
    for(int j=i-1;j>=0;j--){
        if(j==0){
            cout<<s[j]<<endl;
            continue;
        }
        cout<<s[j]<<" ";
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}