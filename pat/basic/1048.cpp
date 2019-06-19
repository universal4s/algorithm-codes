#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
char getc(int x,int y){
    int ans=(x+y)%13;
    if(ans==10) return 'J';
    if(ans==11) return 'Q';
    if(ans==12) return 'K';
    return ans+'0';
}
void solve(){
    string a,b;
    cin>>a>>b;
    string ans;
    int x;
    char c;
    int len;
    if(a.length()<=b.length()){
        string t;
        for(int i=0;i<b.length()-a.length();i++){
            t.push_back('0');
        }
        a=t+a;
        len=b.length();
    }
    else {
        string t;
        for(int i=0;i<a.length()-b.length();i++){
            t.push_back('0');
        }
        b=t+b;
        len=a.length();
    }
    for(int i=1;i<=len;i++){
        if(i&1){
            c=getc(a[a.length()-i]-'0',b[b.length()-i]-'0');
        }
        else {
            x=b[b.length()-i]-'0'-(a[a.length()-i]-'0');
            c=(x+10)%10+'0';
        }
        b[b.length()-i]=c;
    }
    cout<<b<<endl;
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}