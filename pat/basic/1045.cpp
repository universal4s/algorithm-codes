#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[maxn],b[maxn];
//有多少个元素可能是划分前选取的主元
/*
    针对朴素算法，如果对每个元素左右两边都统计，负责度O(n^2)


*/


//快速排序主元的特点，无重复元素时，其主元位置在排序后不变，依据该特性进行求解
//本题需要注意的是，同位置元素相等不等于是主元，需满足其是从第一个位置到该位置的最大元才行
vector<int> ans;
void output(){
    // sort(ans.begin(),ans.end());
    printf("%d\n",(int)ans.size());
    for(int i=0;i<ans.size();i++){
        if(i) printf(" ");
        printf("%d",ans[i]);
    }
    printf("\n");
}
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    memcpy(b,a,sizeof(a));
    sort(b,b+n);
    int _max=-1;//到当前为止的最大值，如果相同位置的两个元素相等，就判断其合理的话，则会出现其前面还有较大元素的漏洞
    //例如 1 4 3 2 5,因此向等元素同时也应该是其未排序时的最大值才行
    for(int i=0;i<n;i++){
        _max=max(_max,a[i]);
        if(_max==a[i]&&a[i]==b[i]){
            ans.push_back(a[i]);
        }
    }
    output();
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}