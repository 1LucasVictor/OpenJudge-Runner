#include<stdio.h>

int main(void) {
  int d,n,ans=1;
  scanf("%d %d",&d,&n);
  if(d == 0) {
    printf("%d\n",n);
    return 0;
  }else if(d == 1) {
    printf("%d\n",100*n);
    return 0;
  }else {
    printf("%d\n",10000*n);
    return 0;
  }
}