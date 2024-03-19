#include <stdio.h>

int main(void){
  int m,n,tmp,c;

  scanf("%d %d",&m,&n);
  while(1){
    tmp = n;
    n = m % n;
    if(n==0){
      printf("%d\n",c);
      break;
    }
    m = tmp;
    c = n;
  }
  return 0;
}