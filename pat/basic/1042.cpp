#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[26];
void solve(){
    string s;
    getline(cin,s);
    int len=s.length();
    char x;
    int _max=-1;
    for(int i=0;i<len;i++){
        if(isalpha(s[i])){
            a[tolower(s[i])]++;
            if(a[tolower(s[i])]>_max){
                _max=a[tolower(s[i])];
                x=tolower(s[i]);
            }
            else if(a[tolower(s[i])]==_max){
                if(x>tolower(s[i])){
                    x=tolower(s[i]);
                }
            }
        }
    }
    cout<<x<<" "<<_max<<endl;
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}