#include<bits/stdc++.h>
using namespace std;
int mp[150];
int main(){
    freopen("in.in","r",stdin);
  string a,b;
  getline(cin,a);
  getline(cin,b);
  int len=a.length();
  for(int i=0;i<len;i++){
    if(!mp[a[i]-32]){
      cout<<a[i];
      mp[a[i]-32]=1;
    }
  }
  len=b.length();
  for(int i=0;i<len;i++){
    if(!mp[b[i]-32]){
      cout<<b[i];
      mp[b[i]-32]=1;
    }
  }
  return 0;
}