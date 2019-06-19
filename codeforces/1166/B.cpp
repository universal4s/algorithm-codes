/******************************************
  > File Name: B.cpp
  > Author: universal42
  > Mail: universal42@163.com
  > Created Time: 2019年05月24日 星期五 09时10分09秒
 ******************************************/

#include<bits/stdc++.h>
#define ll long long int
#define inf 0x3f3f3f3f
#define LOCAL
using namespace std;
const int maxn=1e5+5;
int k;
int xx,y;
bool div(int x){
	int len=sqrt(x);
	for(int i=2;i<=x;i++){
		if(x%i==0&&i>=5&&x/i>=5){
			xx=i,y=x/i;
			return true;
		}
	}
	return false;
}
char a[]="aeiou";
void solve(){
	scanf("%d",&k);
	if(div(k)){
		//对角线填充
		for(int i=0;i<xx;i++){
			for(int j=0;j<y;j++){
				printf("%c",a[(i+j)%5]);
			}
		}
		printf("\n");
	}
	else {

		puts("-1");
	}
}
int main(){
#ifdef LOCAL
	freopen("in.in","r",stdin);
#endif
	solve();
	return 0;
}
