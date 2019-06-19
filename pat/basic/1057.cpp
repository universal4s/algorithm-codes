#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    string s;
    getline(cin,s);
    int len=s.length();
    int z=0,o=0;
    int sum=0;
    for(int i=0;i<len;i++){
        if(isalpha(s[i])){
            sum+=tolower(s[i])-'a'+1;
        }
    }
    while(sum){
        if(sum&1){
            o++;
        }
        else {
            z++;
        }
        sum>>=1;
    }
    printf("%d %d\n",z,o);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}