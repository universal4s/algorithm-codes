#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
#define ex -0.005
const int maxn=1e5+5;

void solve(){
    double r1,p1,r2,p2;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    // double Sin=sin(p1+p2);
    // double Cos=cos(p1+p2);
    // r1=r1*r2;
    double p,q;
    q=r1*r2*cos(p1+p2);
    p=r1*r2*sin(p1+p2);
    if(q>ex&&q<0){
        printf("0.00");
    }
    else {
        printf("%.2lf",q);
    }
    if(p>=0){
        printf("+%.2lfi\n",p);
    }
    else if(ex<p&&p<0){
        printf("+0.00i\n");
    }
    else {
        printf("%.2lfi\n",p);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}