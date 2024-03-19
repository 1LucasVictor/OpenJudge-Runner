#include<stdio.h>
int main(void){
  int x, i, j, n;
  int a[100000];
  j=0;
  scanf("%d", &x);
  for(i=3;i<x+1;i++){
    n=i;
    if(n%3==0||n%10==3){
      a[j]=i;
      printf(" %d", a[j]);
      j++;
    }
    else if(n>30) {
      n/=10;
      if(n%3==0&&n!=6&&n!=9){
        a[j]=i;
        printf(" %d", a[j]);
        j++;
      }
    }
  }
  printf("\n");
  return 0;
}
