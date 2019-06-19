#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e4+5;
int a[maxn];
int mt[10005][1005];
bool cmp(int &a,int &b)
{
    return a>b;
}
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    sort(a,a+n,cmp);
    int q=sqrt(n+0.5),p;
    for(int i=q;i>0;i--){
        if(n%i==0){
            p=n/i;
            q=i;
            break;
        }
    }
    int m=p,l=q;
    //p行q列
    // cout<<p<<" "<<q<<endl;
    int i=0,j=0;
    int cnt=n;
    int cur=0;
    p--;
    while(cur<n){
        //right
        for(int k=0;k<q;k++){
            mt[i][j+k]=a[cur++];
        }
        if(cur==n) break;

        i++;
        j+=q-1;
        q--;
        for(int k=0;k<p;k++){
            mt[i+k][j]=a[cur++];
        }
        if(cur==n) break;
        j--;
        i+=p-1;
        p--;
        for(int k=0;k<q;k++){
            mt[i][j-k]=a[cur++];
        }
        if(cur==n) break;

        i--;
        j-=q-1;
        q--;
        for(int k=0;k<p;k++){
            mt[i-k][j]=a[cur++];
        }
        if(cur==n) break;

        j++;
        i-=p-1;
        p--;

    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            if(j) printf(" ");
            printf("%d",mt[i][j]);
        }
        printf("\n");
    }

    
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}