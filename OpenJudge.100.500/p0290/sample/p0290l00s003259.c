#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int ans=0;
  while(n) {
    int x,i;
    scanf("%d",&x);
    for(i=2; i*i<=x; i++) {
      if(x%i==0) break;
    }
    if(i*i>x) ans++;
    n--;
  }
  printf("%d\n",ans);
  return 0;
}

