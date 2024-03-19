
#include <stdio.h>
int main(void) {
  int v,d[256],n=0;
  while(scanf("%d",&v)!=EOF){
    if(v) {
      d[n]=v;
      n++;
    } else {
      n--;
      printf("%d\n",d[n]);
    }
  }
  return 0;
}