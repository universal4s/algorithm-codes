#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
struct stu{
    int id;
    int d,c;
}a[maxn],b[maxn],cc[maxn],dd[maxn];
int n,l,h;
int sz1,sz2,sz3,sz4;
bool cmp(const stu &a,const stu &b){
    if((a.d+a.c)==(b.d+b.c)){
        if(a.d==b.d){
            return a.id<b.id;
        }
        else {
            return a.d>b.d;
        }
    }
    else return a.d+a.c>b.d+b.c;
}

void solve(){
    // cin>>n>>l>>h;
    scanf("%d %d %d",&n,&l,&h);
    int id,d,c;
    for(int i=0;i<n;i++){
        // cin>>id>>d>>c;
        scanf("%d %d %d",&id,&d,&c);
        if(d>=l&&c>=l){
            if(d>=h&&c>=h){
                a[sz1].id=id;
                a[sz1].d=d;
                a[sz1++].c=c;
            }
            else if(c<h&&d>=h){
                b[sz2].id=id;
                b[sz2].d=d;
                b[sz2++].c=c;

            }
            else if(c<h&&d<h&&d>=c){
                cc[sz3].id=id;
                cc[sz3].d=d;
                cc[sz3++].c=c;
            }
            else {
                dd[sz4].id=id;
                dd[sz4].d=d;
                dd[sz4++].c=c;
            }
        }
    }
    sort(a,a+sz1,cmp);
    sort(b,b+sz2,cmp);
    sort(cc,cc+sz3,cmp);
    sort(dd,dd+sz4,cmp);
    cout<<sz1+sz2+sz3+sz4<<endl;
    for(int i=0;i<sz1;i++){
        printf("%d %d %d\n",a[i].id,a[i].d,a[i].c);
        // cout<<a[i].id<<" "<<a[i].d<<" "<<a[i].c<<endl;
    }
    for(int i=0;i<sz2;i++){
        printf("%d %d %d\n",b[i].id,b[i].d,b[i].c);
        // cout<<b[i].id<<" "<<b[i].d<<" "<<b[i].c<<endl;
    }
        for(int i=0;i<sz3;i++){
            printf("%d %d %d\n",cc[i].id,cc[i].d,cc[i].c);
        // cout<<cc[i].id<<" "<<cc[i].d<<" "<<cc[i].c<<endl;
    }
        for(int i=0;i<sz4;i++){
            printf("%d %d %d\n",dd[i].id,dd[i].d,dd[i].c);
        // cout<<dd[i].id<<" "<<dd[i].d<<" "<<dd[i].c<<endl;
    }    
}

int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}