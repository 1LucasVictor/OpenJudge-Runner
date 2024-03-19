#include <stdio.h>

int main(){
  int d,n,p = 0;
  scanf("%d %d",&d,&n);
  if(n == 100){
    n = 101;
  }
  if(d==0){
    p = n;
  }else if(d==1){
    p = 100 * n;
  }else{
    p = 10000 * n;
  }
  printf("%d\n",p);
}
