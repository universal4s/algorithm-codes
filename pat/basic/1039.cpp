#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
map<char,int> init;
map<char,int> target;
void solve(){
    string a,b;
    cin>>a>>b;
    set<char> s;
    for(int i=0;i<a.length();i++){
        target[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
        init[b[i]]++;
        s.insert(b[i]);
    }
    int ok=1;
    int sum=0;
    int sum2=0;
    for(auto x:s){
        if(init[x]<=target[x]){
            sum+=init[x];
        }
        else {
            sum2+=-target[x]+init[x];
            ok=0;
        }
    }
    if(!ok) {
        cout<<"No "<<sum2<<endl;
    }
    else {
        cout<<"Yes "<<a.length()-sum<<endl;
    }
    
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}