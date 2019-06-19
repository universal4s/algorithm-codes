#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[3],b[3],c[3];
int pa=0;
char mp[3]={'C','J','B'};
void solve(){
    int t;
    scanf("%d",&t);
    char x,y;
    int n=t;
    while(t--){
        getchar();
        scanf("%c %c",&x,&y);
        if(x=='C'&&y=='J'){
            a[0]++;
        }
        else if(x=='J'&&y=='C'){
            b[0]++;
        }
        else if(x=='J'&&y=='B'){
            a[1]++;

        }
        else if(x=='B'&&y=='J'){
            b[1]++;
        }
        else if(x=='B'&&y=='C'){
            a[2]++;
        }
        else if(x=='C'&&y=='B'){
            b[2]++;
        }
        else {
            pa++;
        }

    }
    printf("%d %d %d\n",a[0]+a[1]+a[2],pa,n-a[0]-a[1]-a[2]-pa);
    printf("%d %d %d\n",b[0]+b[1]+b[2],pa,n-b[0]-b[1]-b[2]-pa);
    // printf("%c %c\n",ansa,ansb);
    char p='C',q='C';
    int _max=a[0];
    for(int i=1;i<3;i++){
        if(_max==a[i]){
            p=min(p,mp[i]);
        }
        else if(_max<a[i]){
            _max=a[i];
            p=mp[i];
        }
    }
    _max=b[0];
    for(int i=1;i<3;i++){
        if(_max==b[i]){
            q=min(q,mp[i]);
        }
        else if(_max<b[i]){
            _max=b[i];
            q=mp[i];
        }
    }
    printf("%c %c\n",p,q);

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}