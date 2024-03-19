#include<stdio.h>
int main(void){
  int n, m, k;
  scanf("%d", &n);
  scanf("%d", &m);
  k = m % n;
  if(k==0){
    printf("%d\n", n+m);
  }else{
    printf("%d\n", m-n);
  }
  return 0;
}
