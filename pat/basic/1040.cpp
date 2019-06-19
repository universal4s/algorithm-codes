#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define Mod 1000000007
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int dpp[maxn];
int dpt[maxn];
void solve(){
    string s;
    cin>>s;
    for(int i=1;i<=s.length();i++){
        if(s[i-1]=='P'){
            dpp[i]=dpp[i-1]+1;
        }
        else {
            dpp[i]=dpp[i-1];
        }
    }
    for(int i=s.length()-2;i>=0;i--){
        if(s[i+1]=='T'){
            dpt[i]=dpt[i+1]+1;
        }
        else {
            dpt[i]=dpt[i+1];
        }
    }
    ll sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            sum+=dpp[i]*dpt[i];
            sum%=Mod;
        }
    }
    cout<<sum<<endl;
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}