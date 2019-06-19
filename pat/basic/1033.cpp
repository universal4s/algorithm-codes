#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    map<char,bool>mp;
    bool ismis=false;
    bool flag=false;
    for(int i=0;i<a.length();i++) {
        if(a[i]=='+'){
            ismis=true;
        }
        mp[tolower(a[i])]=1;
    }
    for(int i=0;i<b.length();i++){
        if(isalpha(b[i])){
            if(b[i]>=65&&b[i]<=90){
                if(mp[tolower(b[i])]){
                    continue;
                }
                else if(ismis){
                    continue;
                }
                else {
                    cout<<b[i];
                    flag=true;
                }
            }
            else if(mp[b[i]]){
                continue;
            }
            else {
                cout<<b[i];
                flag=true;
            }
        }
        else {
            if(mp[b[i]]){
                continue;
            }
            else {
                cout<<b[i];
                flag=true;
            }
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