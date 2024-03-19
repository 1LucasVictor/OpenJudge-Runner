#include <stdio.h>
int main(){
  int n,a[10000],i,j,cnt=0,cnt1;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    cnt1=0;
    if(a[i]==1)continue;
    for(j=2;j<a[i];j++){
      if(a[i]%j==0)cnt1++;
    }
    if(cnt1==0)cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}

