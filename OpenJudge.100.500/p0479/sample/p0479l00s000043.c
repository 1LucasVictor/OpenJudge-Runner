#include <stdio.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
  int i, n;
  scanf("%d",&n);
  int a[n],d[n];
  a[0] = 0;
  for(i=1;i<n;i++) scanf("%d",&a[i]);
  rep(i,n) d[i] = 0;
  rep(i,n) d[a[i]]++;
  for(i=1;i<n;i++) {
    printf("%d\n",d[i]);
  }
  puts("0");
}
   