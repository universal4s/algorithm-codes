#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int n;
string s[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
void solve(){
    string ss;
    cin>>ss;
    int len=ss.length();
    for(int i=0;i<len;i++)
    {
        n+=ss[i]-'0';
    }
    int i=0;
    vector<int> v;
    while(n){
        // if(i) cout<<" ";
        // cout<<s[n%10];
        // n/=10;
        v.push_back(n%10);
        n/=10;
    }
    len=(int)v.size();
    for(int i=len-1;i>=0;i--){
        cout<<s[v[i]];
        if(i!=0) cout<<" ";

    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}