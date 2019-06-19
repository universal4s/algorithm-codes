#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
string day[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

//注意审题
void solve(){
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int len=min(a.length(),b.length());
    string day1;
    int day2,day3;
    int cnt=0;
    for(int i=0;i<len;i++){
        if(!cnt&&a[i]>=65&&a[i]<=90&&a[i]==b[i]&&a[i]<='G'){
            day1=day[a[i]-'A'];
            cnt^=1;
        }
        else if(cnt&&a[i]==b[i]&&a[i]<='N'){
            if(isalpha(a[i])){
                day2=a[i]-'A'+10;
                break;
            }
            else if(isdigit(a[i])){
                day2=a[i]-'0';
                break;
            }
        }
    }
    len=min(c.length(),d.length());
    for(int i=0;i<len;i++){
        if(c[i]==d[i]&&isalpha(c[i])){
            day3=i;
        }
    }
    printf("%s %02d:%02d\n",day1.c_str(),day2,day3);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}