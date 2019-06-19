#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
void solve(){
    int n1,m1,k,n2,m2;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    int flag=0;
    int i=k*n1/m1;
    if(n1*m2<m1*n2){
        while(1){
            if(k*n1<i*m1&&k*n2>m2*i&&gcd(i,k)==1){
                if(flag) printf(" ");
                printf("%d/%d",i,k);
                flag++;
            }
            else if(i*m2>=n2*k){
                break;
            }
            i++;
        }
    }
    else {
        i=k*n2/m2;
        while(1){
            if(k*n1>i*m1&&k*n2<m2*i&&gcd(i,k)==1){
                if(flag) printf(" ");
                printf("%d/%d",i,k);
                flag++;
            }
            else if(i*m1>=n1*k){
                break;
            }
            i++;
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