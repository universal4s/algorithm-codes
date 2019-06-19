/******************************************
    > File Name: 2423.cpp
    > Author: universal42
    > Mail: universal42@163.com 
    > Created Time: 2019年04月05日 星期五 07时42分29秒
 ******************************************/

#include<bits/stdc++.h>
#define ll long long int
#define inf 0x3f3f3f3f
#define LOCAL
using namespace std;
const int maxn=1e5+5;
int deg[1005];
void solve(){
	int n;
	scanf("%d",&n);
	int x,y;
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&x,&y);
		deg[x]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!deg[i]){
			ans++;
		}
	}
	printf("%d\n",ans);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}

