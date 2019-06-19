#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3ffffff
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[1005][1005];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int m,n,tol;
map<int,int>ct;
bool check(int i,int j){
    int tmp=1<<24;
    for(int x=0;x<8;x++){
        int fx=i+dx[x];
        int fy=j+dy[x];
        if(fx>=0&&fx<n&&fy>=0&&fy<m&&abs(a[fx][fy]-a[i][j])<=tol) return false;

    }
    return true;
}
void solve(){
    cin>>m>>n>>tol;
    int flag=0;
    int ansx=0,ansy=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            ct[a[i][j]]++;
        }
    }
    // int _max=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check(i,j)&&ct[a[i][j]]==1){
                flag++;
                ansx=i;
                ansy=j;
            }
        }
    }
    if(flag==0){
        cout<<"Not Exist\n";
    }
    else if(flag==1){
        cout<<"("<<ansy+1<<", "<<ansx+1<<"): "<<a[ansx][ansy]<<"\n";
    }
    else {
        cout<<"Not Unique\n";
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}