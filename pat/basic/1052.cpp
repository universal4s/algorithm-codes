#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
// char s[maxn],y[maxn],k[maxn];
char err[]="Are you kidding me? @\\/@\n";
string ss[1000],yy[1000],kk[1000];
void solve(){
    string s,y,k;
    char x;
    int flag=0;
    int i=0,j=0,_k=0;
    while(1){
        x=getchar();
        if(x==' ') continue;
        if(x=='\n') break;
        if(x=='['){
            flag=1;
            continue;
        }
        if(x==']'){
            // cout<<ss[i]<<endl;
            i++;
            flag=0;
            continue;
        }
            if(flag){
            ss[i]+=x;
        }
        
    }
    while(1){
        x=getchar();
        if(x==' ') continue;
        if(x=='\n') break;
        if(x=='['){
            flag=1;
            continue;
        }
        if(x==']'){
            // cout<<yy[j]<<endl;
            j++;
            flag=0;
            continue;
        }
        if(flag){
            yy[j]+=x;
        }
    }
    while(1){
        x=getchar();
        if(x==' ') continue;
        if(x=='\n') break;
        if(x=='['){
            flag=1;
            continue;
        }
        if(x==']'){
            // cout<<kk[_k]<<endl;
            _k++;
            flag=0;
            continue;
        }
        if(flag){
            kk[_k]+=x;
        }
        
    }
    int m=0;
    scanf("%d",&m);
    int a,b,c,d,e;
    for(int Kase=0;Kase<m;Kase++){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if(a>i||a<=0||b>j||b<=0||c>_k||c<=0||d>j||d<=0||e>i||e<=0){
            printf("%s",err);
            continue;
        }
        else {
            printf("%s(%s%s%s)%s\n",ss[a-1].c_str(),yy[b-1].c_str(),kk[c-1].c_str(),yy[d-1].c_str(),ss[e-1].c_str());
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